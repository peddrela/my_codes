#include <iostream>
using namespace std;

//A identidade de Bezout diz que MDC(a, b) = s*a + t*b, sendo s e t dois números inteiros não nulos.

int bezout (int a, int b){
    cout << "Passo a passo para calcular o MDC(" << a << ", " << b << "):\n";
    cout << endl;

    //Vamos inicializar os valores:
    //(ant = antigo).
    int s_ant = 1, t_ant = 0; // Representam: a = a*1 + 0*b
    int s_novo = 0, t_novo = 1;//Representam: b = a*0 + 1*b

    int n = a, m = b; //Vamos utilizar na saída do programa.
    while (b!= 0)
    {
        int q = a/b; //Calcula o quociente da divisão
        int r = a%b; //Calcula o resto da divisão

        //Equação atual do passo
        cout << a << " = " << q << "*" << b << " + " << r << "\n";

        //Atualiza os coeficientes s. 
        //Como a = q*b + r ---> r = a - q*b (1)
        //A , B = valores originais
        //a = s_ant * A + t_ant * B (2)
        //b = s_novo * A + t_novo * B (3)

        //Substituindo (2) e (3) em (1):
        //r = (s_ant * A + t_ant * B) - q*(s_novo * A + t_novo * B)
        //Assim, colocando A e B em evidência.
        //r = (s_ant - q*s_novo) * A + (t_ant - q*t_novo) * B.
        //Logo, pela identidade de bezout
        //s_prox = s_ant - q*s_novo
        //t_prox = t_ant - q*t_novo
        int temp_s = s_ant - q * s_novo; //Calcula o proximo coeficiente s
        s_ant = s_novo; // Atualiza o coeficiente antigo
        s_novo = temp_s; // Armazena o coeficiente novo

        //Atualiza os coeficientes t
        int temp_t = t_ant - q * t_novo; //Calcula o proximo coeficiente t
        t_ant = t_novo; // Atualiza o coeficiente antigo
        t_novo = temp_t; // Armazena o coeficiente novo

        //Prepara para prózima iteração 
        a = b; // O divisor atual vira o dividendo
        b = r; // O resto vira o novo divisor
    }

    cout << "\nMDC = " << a << "\n";
    cout << "Coeficientes: s = " << s_ant << ", t = " << t_ant << "\n";
    cout << "Verificacao: " << s_ant << "*" << n << " + " << t_ant << "*" << m << " = " << a << "\n";
    return 0;
}

int main(){
    int a, b;
    cout << "Digite um numero inteiro positivo: ";
    cin >> a;
    cout << "Digite outro numero inteiro positivo: ";
    cin >> b;

    cout << endl;

    bezout(a, b);
    return 0;
}
