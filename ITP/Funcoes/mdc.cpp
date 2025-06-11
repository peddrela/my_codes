#include <iostream>
#include <string>
using namespace std;

int mdc(int a, int b){
    int temp = b;
    int resultado = 1;
    if (a == 0 || b == 0)
    {
        resultado = 0;
    }
    
    if (b < a)
    {
        b = a;
        a = temp;
    }
    
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            resultado = i;
        }
    }
    return resultado; 
}

int main (){
    int n, m;

    cin >> n >> m;

    cout << mdc(n, m) << endl;

    return 0;
}