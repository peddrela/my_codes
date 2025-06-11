#include <iostream>
using namespace std;

bool primogemeo(int n, int m){
    int count1 = 0;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            count1++;
        }
    }
    if (count1 != 2)
    {
        return false;
    }
    int count2 = 0;
    for (int i = m; i > 0; i--)
    {
        if (m % i == 0)
        {
            count2++;
        }
    }
    if (count2 != 2)
    {
        return false;
    } 
    return true;
}

int main(){
    int n;
    cin >> n;

    if (primogemeo(n, n+2) == true)
    {    
        cout << "Numero forma par de gemeos\n";   
    }
    else
    {
        cout << "Numero nao forma par de gemeos\n";
    }
}