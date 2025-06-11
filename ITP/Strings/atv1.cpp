#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main (){
    string texto, vogais = "AaEeIiOoUu";

    cin >> texto;
    int count = 0;

    for (int i = 0; i < texto.size(); i++)
    {
        for (int j = 0; j < vogais.size(); j++)
        {
            if (texto[i] == vogais[j])
            {
                count++;
            }
        }        
    }
    
    cout << count << endl;

    return 0;
}