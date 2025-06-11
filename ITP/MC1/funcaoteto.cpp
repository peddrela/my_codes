#include <iostream>
using namespace std;

float teto (double a){
    if (a >= 0)
    {
        int resultado = 0;
        while (resultado < a){
            resultado++;
        }
        return resultado;
    }

    else
    {
        int resultado = -1;
        while (resultado > a + 1)
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