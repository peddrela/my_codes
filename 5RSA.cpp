#include <iostream>
#include <string>
using namespace std;

bool eh_Par(int n){
    if (n%2 == 0){
        return true;
    }
    return false;
}

bool eh_Primo(int n){
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }        
    }
    return true;
}

int mdc(int a, int b){
    if (b == 1)
    {
        return 1;
    }
    
    while (b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

long long inv_mod(long long e, long long totiente) {
    // Verifica se são coprimos
    if (mdc(e, totiente) != 1) {
        return -1;
    }
    
    for (long long i = 1; i < totiente; i++) {
        if ((e * i) % totiente == 1) {
            return i;
        }
    }
    return -1;
}

void rsaEncrypt(const string& message, int e, int n, long long ciphertext[], int& cipherLength) {
    cipherLength = 0;
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (isalpha(c)) {
            // Convertemos para maiúscula para simplificar
            char upperC = toupper(c);
            long long m = upperC - 'A';
            // Ciframos: c = m^e mod n
            long long encrypted = 1;
            for (int j = 0; j < e; j++) {
                encrypted = (encrypted * m) % n;
            }
            ciphertext[cipherLength++] = encrypted;
        }
    }
}

string rsaDecrypt(const long long ciphertext[], int cipherLength, int d, int n) {
    string message;
    for (int i = 0; i < cipherLength; i++) {
        long long c = ciphertext[i];
        // Deciframos: m = c^d mod n
        long long decrypted = 1;
        for (int j = 0; j < d; j++) {
            decrypted = (decrypted * c) % n;
        }
        char letter = 'A' + decrypted;
        message += letter;
    }
    return message;
}

int main (){
    int p, q;
    cout << "Digite um numero primo p: ";
    cin >> p;
    cout << "Digite um numero primo q: ";
    cin >> q;

    if (eh_Primo(p) == false || eh_Primo(q) == false)
    {
        cout << "Numeros invalidos!\n";
        return 0;
    }
    
    int n = p * q;

    int phi = (p - 1) * (q - 1);

    int e;
    cout << "Digite sua chave publica e (deve ser coprimo com " << phi << "):";
    cin >> e;

    if (mdc(e, phi) != 1)
    {
        cout << "(e) Invalido! Vamos usar o valor valido mais próximo!";
        if (eh_Par(e) == true)
        {
            e++;
        }
    
        while (mdc(e, phi) != 1){
            e += 2;
        }

        cout << "Novo valor de (e): " << e << endl;
    }
    
    
    long long d = inv_mod(e, phi);

    if (d == -1)
    {
        cout << "Erro! Nao foi possivel calcular o inversoo modular para e = " << e << endl;
        return 0;
    }
    
    cout << "\nParametros RSA: \n";
    cout << "p = " << p << ", q = " << q << endl;
    cout << "n = p * q = " << n << endl;
    cout << "totiente(n) = (p - 1) * (q - 1) = " << phi << endl;
    cout << "Chave publica (e, n) = (" << e << ", " << n << ")\n";
    cout << "Chave privada (d, n) = (" << d << ", " << n << ")\n";

    string mensagem;
    cout << "\nDigite a mensagem a ser cifrada: ";
    cin >> mensagem;
    getline(cin, mensagem);

    const int MAX_SIZE = 1000;
    long long textocifrado[MAX_SIZE];
    int tamanhotexto = 0;

    rsaEncrypt(mensagem, e, n, textocifrado, tamanhotexto);

    cout << "\nMensagem cifrada: ";
    for (int i = 0; i < tamanhotexto; i++)
    {
        cout << textocifrado[i] << " ";
    }
    cout << endl;

    string mensagemdDescriptografada = rsaDecrypt(textocifrado, tamanhotexto, d, n);
    cout << "Mensagem decifrada: " << mensagemdDescriptografada << endl;
}
