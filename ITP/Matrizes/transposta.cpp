#include <iostream>
using namespace std;

void transposta(int linhas, int colunas, int seq[10][10]){
    if (linhas == 1 and colunas == 1)
    {
        cout << seq[0][0];
    }
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            
        }
        
    }
    
}

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
    
}