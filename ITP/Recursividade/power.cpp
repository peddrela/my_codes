#include <iostream>
using namespace std;

int power(int b, int exp){
    if (exp == 0)
    {
        return 1;
    }
    return b * power(b, exp - 1);
}

int main (){
    int base, expoente;

    cin >> base >> expoente;
    cout << power(base, expoente);
}