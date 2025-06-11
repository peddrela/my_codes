#include <iostream>
using namespace std;

struct Terreno
{
    int profundidade, largura;
    int altura[500][500];
};

int maior_altura(Terreno t){
    if (t.profundidade == 0 || t.largura == 0)
    {
        return 0;
    }
    
    int maior = t.altura[0][0];
    for (int i = 0; i < t.profundidade; i++)
    {
        for (int j = 0; j < t.largura; j++)
        {
            if (t.altura[i][j] > maior)
            {
                maior = t.altura[i][j];
            }
            
        }
        
    }
    
    return maior;
}

int main(){
    Terreno t1;

    cin >> t1.profundidade >> t1.largura;

    for (int i = 0; i < t1.profundidade; i++)
    {
        for (int j = 0; j < t1.largura; j++)
        {
            cin >> t1.altura[i][j];
        }
        
    }
    
    int maior = maior_altura(t1);
    cout << maior << endl;
    
    return 0;
}
