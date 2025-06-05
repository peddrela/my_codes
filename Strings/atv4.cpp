#include <iostream>
#include <string>
using namespace std;

int main()
{
    string placa;
    string numeros = "0123456789";
    string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    getline(cin, placa);
    int count = 0;

    if (placa.size() != 8)
    {
        cout << "nao\n";
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        if (maiusculas.find(placa[i]) == string::npos)
        {
            cout << "nao\n";
            return 0;
        }
    }

    if (placa[3] != '-')
    {
        cout << "nao\n";
        return 0;
    }

    for (int i = 4; i < placa.size(); i++)
    {
        if (numeros.find(placa[i]) == string::npos)
        {
            cout << "nao\n";
        }
    }

    cout << "sim\n";

    return 0;
}