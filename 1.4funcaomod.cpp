#include <iostream>
using namespace std;

int mod (int a, int b){
    if (b == 0) //Caso o divisor for 0, há um erro matemático. Não existe divisão por 0.
    {
        cout << "Erro! Divisao por 0.\n";
        return 0;
    }
    if (b == 1) //Caso o divisor for 1, a resposta será o dividendo, uma vez que: Para todo n, n*1 = n.
    {
        return 0;
    }
    
    int q = 0, r; //Inicializa os valores do quociente e do resto.
    for (int i = 1; i < a; i++)
    {
        if (b * i <= a) //Acha o quociente, assim como a operação div.
        {
            q = i;
        }
    }
    //Como a = q*b + r. Logo, r = a - q*b.
    r = a - q*b;
    
    return r; //Retorna o resto.
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << mod(a, b) << endl;
}