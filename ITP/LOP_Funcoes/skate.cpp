#include <iostream>
using namespace std;

int score(int nota1, int nota2, int nota3){
    if (nota1 > nota2 && nota1 < nota3 || nota1 < nota2 && nota1 > nota3)
    {
        return nota1;
    }
    if (nota2 > nota1 && nota2 < nota3 || nota2 < nota1 && nota2 > nota3)
    {
        return nota2;
    }
    if (nota3 > nota1 && nota3 < nota2 || nota3 < nota1 && nota3 > nota2)
    {
        return nota3;   
    }
    if (nota1 == nota2 && nota1 != nota3 || nota1 == nota3 && nota1 != nota2)
    {
        return nota1;
    }
    if (nota2 == nota1 && nota2 != nota3 || nota2 == nota3 && nota2 != nota1)
    {
        return nota2;
    }
    if (nota3 == nota2 && nota3 != nota1 || nota3 == nota1 && nota3 != nota2)
    {
        return nota3;
    }
    if (nota1 == nota2 && nota2 == nota3)
    {
        return nota1;
    }
    
    return 0;
}

int main (){
    int notas[18];
    for (int i = 0; i < 18; i++)
    {
        cin >> notas[i];
    }
    int A1, A2, A3;

    A1 = score(notas[0], notas[1], notas[2]);
    A2 = score(notas[3], notas[4], notas[5]);
    A3 = score(notas[6], notas[7], notas[8]);
    
    int B1, B2, B3;

    B1 = score(notas[9], notas[10], notas[11]);
    B2 = score(notas[12], notas[13], notas[14]);
    B3 = score(notas[15], notas[16], notas[17]);

    int totalA, totalB;

    totalA = score(A1, A2, A3);
    totalB = score(B1, B2, B3);

    if (totalA > totalB)
    {
        cout << "A\n";
    }
    if (totalB > totalA)
    {
        cout << "B\n";
    }
    if (totalA == totalB)
    {
        cout << "empate\n";
    }
    return 0;
}