#include <iostream>
using namespace std;

int main (){
    int linha, coluna;
    cin >> linha >> coluna;

    int m[linha][coluna];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            cin >> m[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (i == j && m[i][j] == 1)
            {
                count++;
            }
        }
    }
    
    if (count == linha)
    {
        cout << "Eh identidade\n";
    }
    else
    {
        cout << "NAO eh identidade\n";
    }
    
    return 0;
}