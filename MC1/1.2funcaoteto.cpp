#include <iostream>
using namespace std;

int teto (double a){
    if (a >= 0) //Caso para os números positivos
    {
        int resultado = 0;
        while (resultado < a){ //Encontra o menor inteiro positivo maior que "a", incrementando uma unidade, a partir do 0, caso o valor for menor que "a".
            resultado++;
        }
        return resultado;
    }

    else //Caso para os números negativos
    {
        int resultado = 0;
        while (resultado > a+1) //Encontra o menor inteiro negativo menor que "a", decrementando uma unidade, a partir do -1, caso o valor for menor que "a".
        {
            resultado--;
        }
        return resultado;
    }
}

int main (){
    double n;
    cin >> n;

    cout << teto(n) << endl;
}
