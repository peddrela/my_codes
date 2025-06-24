#include <iostream>
using namespace std;

int funcdiv (int a, int b){
    if (b == 0) //Caso o divisor for 0, há um erro matemático. Não existe divisão por 0.
    {
        cout << "Erro! Divisao por 0.\n";
        return 0;
    }
    if (b == 1) //Caso o divisor for 1, a resposta será o dividendo, uma vez que: Para todo n, n*1 = n.
    {
        return a;
    }
    
    int q = 0; //Inicializa o valor do quociente.
    for (int i = 1; i < a; i++)
    {
        if (b * i <= a) //Checa o maior valor inteiro que, quando multiplicado pelo divisor, não ultrapasse o dividendo.
        {
            q = i; //O quociente recebe esse valor.
        }
        
    }
    
    return q; //Retorna o quociente.
}

int main (){
    int a, b;
    cin >> a >> b;
    cout << funcdiv(a, b) << endl;
}