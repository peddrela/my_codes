#include <iostream>
#include <string>
using namespace std;

float potencia(float b, int p){
    float x = b;
    int potbase = 1;
    if (p == 0)
    {
        return potbase;
    }
    
    for (int i = 1; i < p; i++)
    {
        b *= x;
    }

    return b;
}

int main (){
    float n;
    int p;

    cin >> n >> p;

    cout << potencia(n, p) << endl;
}