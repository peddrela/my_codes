#include <iostream>
#include <string>
using namespace std;

struct Pais
{
    string sigla;
    long POP;
    double IDH;
};

int lerPaises(Pais p[]) {
    int qtd = 0;
    string s;
    
    while (getline(cin, s) && s != "---" && qtd < 100) {
        // Extrai os 3 valores diretamente
        p[qtd].sigla = s.substr(0, 3);
        p[qtd].POP = stol(s.substr(4, s.find(' ', 4) - 4));
        p[qtd].IDH = stod(s.substr(s.find_last_of(' ') + 1));
        qtd++;
    }
    return qtd;
}

int mediaPop(Pais paises[], int quantidade){
    double mediapop = 0.0;
    for (int i = 0; i < quantidade; i++)
    {
       mediapop += paises[i].POP;
    }
    
    return quantidade > 0 ? mediapop/quantidade : 0.0;
}

double mediaIDH(Pais paises[], int quantidade){
    double mediaidh = 0.0;
    for (int i = 0; i < quantidade; i++)
    {
        mediaidh += paises[i].IDH;
    }
    
    return quantidade > 0 ? mediaidh/quantidade : 0.0;
}

bool atende_criterios(Pais pais, double mediaIDH, int mediaPop){
    return pais.IDH < mediaIDH && pais.POP > mediaPop;
}

int main (){
    Pais paises[100];
    int qtd = lerPaises(paises);

    double idhmedio = mediaIDH(paises, qtd);
    int popmedia = mediaPop(paises, qtd);

    for (int i = 0; i < qtd; i++)
    {
        if (atende_criterios(paises[i], idhmedio, popmedia))
        {
            cout << paises[i].sigla << endl;
        }
    }
    return 0;
}