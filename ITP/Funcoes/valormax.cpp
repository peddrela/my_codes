#include <iostream>
#include <string>
using namespace std;

int max (int a[], int n){
    int maior = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maior)
        {
            maior = a[i];
        }
    }
    return maior;
}

int main (){
    int n, a[n];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << max(a, n) << endl;
    
}