#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main (){
    string texto;

    getline(cin, texto);

    texto[0] = toupper(texto[0]);
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == ' ')
        {
            texto[i+1] = toupper(texto[i+1]);
        }
    }

    cout << texto << endl;
    return 0;
}