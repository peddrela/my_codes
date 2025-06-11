#include <iostream>
using namespace std;

int encontrar(int num, int tam, int seq[]){
    if (tam == 0)
    {
        return false;
    }
    
    if (seq[tam-1] == num)
    {
        return true;
    }
    return encontrar(num, tam-1, seq);
}

int main (){
    int n, tam;
    cin >> n >> tam;
    int s[tam];
    for (int i = 0; i < tam; i++)
    {
        cin >> s[i];
    }

    cout << encontrar(n, tam, s) << endl;
    
}