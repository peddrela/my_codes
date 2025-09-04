#include <iostream>
using namespace std;

int mdc(int a, int b){
    cout << "Calculando MDC(" << a << ", " << b << "):\n";
    while (b!=0)
    {
        cout << a << " = " << b << " * " << a/b << " + " << a%b << endl; //Mostra o que foi feito no passo.
        //Atualiza as incógnitas, refazendo o mdc, no passo seguinte, com o menor valor do passo anterior, e o mod dos valores. --> mdc(a, b) == mdc(b, a%b).
        int temp = b;
        b = a % b;
        a = temp;
    }
    //Finaliza os testes quando não há resto.
    cout << "Logo, como o resto da ultima divisao eh 0, o MDC eh = " << a << endl;
    return a;
}

int main (){
    int a, b;
    cout << "Digite dois numeros inteiros positivos: ";
    cin >> a >> b;
    
    cout << mdc(a, b) << endl;
}
