#include <iostream>
using namespace std;

int multipl(int k, int linhas, int colunas, int seq[10][10]){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            seq[i][j] *= k;
        }   
    }
}