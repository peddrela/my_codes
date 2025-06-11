#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main (){
    string texto, palavra;

    getline(cin, texto);

    cin >> palavra;
    int count = 0;

    size_t pos = texto.find(palavra);
    while (texto.find(palavra) != string::npos)
    {
        count++;
        pos = texto.find(palavra, pos + 1);
    }

    cout << count << endl;
    
    return 0;
}