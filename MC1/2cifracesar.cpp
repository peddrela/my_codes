#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string cesar(string texto, int chave){
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z') 
        {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
            //(texto[i] - 'A') converte a letra para um número (A=0, B=1,...,Z=25)
            //(+ chave) aplica o deslocamento.
            //(%26) garante que, se o deslocamento passar de Z, volte para o A.
            //(+A) converte de volta para letra.
        }
        else if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
            //idem.
        }
    }
    return texto;    
}

int main(){
    string mensagem;
    int chave;

    cout << "Digite a mensagem: ";
    getline(cin, mensagem);

    cout << "Digite a chave (deslocamento): ";
    cin >> chave;

    string cifrada = cesar(mensagem, chave);
    cout << "Mensagem cifrada: " << cifrada << endl;

    return 0;
}
