#include <iostream>
using namespace std;

float piso(double a)
{
    if (a >= 0) //Caso para os números positivos
    {
        int resultado = 0;
        while (resultado + 1 <= a) // Encontra o maior número positivo inteiro menor ou igual à entrada (piso)
        {
            resultado++;
        }
        return resultado;
    }

    else //Caso para os números negativos
    {
        int resultado = -1;
        while (resultado > a) //Encontra o maior número negativo inteiro que não maior que à entrada (piso)
        {
            resultado--;
        }
        return resultado;
    }
}
// Exemplo1: a = 5.4 --> encontra o "5", pois é o maior número menor ou igual à 5.4, assim retorna o 5.
// Exemplo2: a = -2.9 --> encontra o "-3", pois é o maior número inteiro que não ultrapassa a entrada, assim retorna o -3.
int main()
{
    double n;
    cin >> n;

    cout << piso(n) << endl;
}