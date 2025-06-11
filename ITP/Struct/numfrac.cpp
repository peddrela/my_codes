#include <iostream>
using namespace std;

struct Frac
{
    int num;
    int div;
};

Frac add(Frac a, Frac b){
    Frac resultado;
    resultado.num = a.num*b.div + a.div*b.num;
    resultado.div = a.div*b.div;

    return resultado;
}

Frac subt(Frac a, Frac b){
    Frac resultado;
    resultado.num = a.num*b.div - a.div*b.num;
    resultado.div = a.div*b.div;

    return resultado;
}

Frac mult(Frac a, Frac b){
    Frac resultado;
    resultado.num = a.num * b.num;
    resultado.div = a.div * b.div;

    return resultado;
}

Frac div(Frac a, Frac b){
    Frac resultado;
    resultado.num = a.num * b.div;
    resultado.div = b.num * a.div;

    return resultado;
}


int main (){
    Frac frac1;
    Frac frac2;

    cin >> frac1.num >> frac1.div;
    cin >> frac2.num >> frac2.div;
    Frac resultadomul = mult(frac1, frac2);
    Frac resultadodiv = div(frac1, frac2);
    std::cout << resultadomul.num << "/" << resultadomul.div << std::endl;
    std::cout << resultadodiv.num << "/" << resultadodiv.div << std::endl;

    return 0;
}