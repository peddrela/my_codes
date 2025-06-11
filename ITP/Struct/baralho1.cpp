#include <iostream>
using namespace std;
/* QUESTÃO 1 */
enum Valor{
    As, V1, V2, V3, V4, V5, V6, V7, V8, V9, V10, J, Q, K
};

enum Naipe{
    Ouros, Paus, Espadas, Copas
};

/*QUESTÃO 2*/
struct Carta
{
    Valor valor;
    Naipe naipe;
};

/*QUESTÃO 3*/
struct Cartas
{
    int quantidade;
    Carta carta[52];
};

/*QUESTÃO 4*/
bool verif_seq(Cartas cs){
    if (cs.quantidade < 3)
    {
        return false;
    }
    
    for (int i = 0; i < cs.quantidade - 2; i++)
    {
        if (cs.carta[i].naipe == cs.carta[i+1].naipe &&
        cs.carta[i+1].naipe == cs.carta[i+2].naipe)
        {
            if (cs.carta[i].valor + 1 == cs.carta[i+1].valor &&
            cs.carta[i+1].valor + 1 == cs.carta[i+2].valor)
            {
                return true;
                break;
            }
        }
    }
    
    return false;
}

int main(){
    Valor valor;
    Naipe naipe;

    Carta c = {Q, Ouros};

    Cartas cs = {
        3,{{As, Ouros}, {V2, Ouros}, {V3, Ouros}}
    };

    Cartas teste = {
        4, {{V5, Paus}, {As, Copas}, {V2, Copas}, {V3, Copas}}
    };

    std::cout << verif_seq(teste) << endl;
    return 0;
}