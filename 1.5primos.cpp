#include <iostream>
using namespace std;


bool eh_primo (int num){ //Verifica se um número é primo ou não.
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    
    return true;
}
int primos (int a, int b){
    if (b < 2)//Caso 1: Fim do intervalo é menor que o primeiro primo.
    {
        cout << "Não possui primos no intervalo!\n";
        return 0;
    }
    int count = 0;
    for (int i = a; i <= b; i++) //Verifica os números primos entre o início "a" e o fim "b" do intervalo.
    {
        if (eh_primo(i) == true){
            cout << "_" << i << "_";
            count++;
        }
    }
    if (count == 0) //Caso não haja primos:
    {
        cout << "Nao ha primos nesse intervalo!";
    }
    
    cout << endl;
    return 0;
}

int main (){
    int a, b;
    cin >> a >> b;
    primos(a, b);
    return 0;
}