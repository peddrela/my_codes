#include <iostream>
#include <cmath>
using namespace std;
/*
0
6
10
6
10
6
10
10
6
10
*/
struct Coordenada
{
    double x;
    double y;
};

int dist (Coordenada coord){
    return sqrt((coord.x*coord.x)-(coord.y*coord.y));
}
int Pontuacao(int dist){
    if (dist < 0)
    {
        dist = -dist;
    }
    if (dist >= 0 and dist <=1)
    {
        return 10;
    }
    if (dist > 1 and dist <=2)
    {
        return 6;
    }
    if (dist > 2 and dist <=3)
    {
        return 4;
    }
    return 0;
}

int main (){
    Coordenada coord1;
    cin >> coord1.x;
    cin >> coord1.y;
    int n1 = dist(coord1);
    Coordenada coord2;
    cin >> coord2.x;
    cin >> coord2.y;
    int n2 = dist(coord2);
    Coordenada coord3;
    cin >> coord3.x;
    cin >> coord3.y;
    int n3 = dist(coord3);
    Coordenada coord4;
    cin >> coord4.x;
    cin >> coord4.y;
    int n4 = dist(coord4);
    Coordenada coord5;
    cin >> coord5.x;
    cin >> coord5.y;
    int n5 = dist(coord5);
    Coordenada coord6;
    cin >> coord6.x;
    cin >> coord6.y;
    int n6 = dist(coord6);
    Coordenada coord7;
    cin >> coord7.x;
    cin >> coord7.y;
    int n7 = dist(coord7);
    Coordenada coord8;
    cin >> coord8.x;
    cin >> coord8.y;
    int n8 = dist(coord8);
    Coordenada coord9;
    cin >> coord9.x;
    cin >> coord9.y;
    int n9 = dist(coord9);
    Coordenada coord10;
    cin >> coord10.x;
    cin >> coord10.y;
    int n10 = dist(coord10);

    cout << Pontuacao(n1)+Pontuacao(n2)+Pontuacao(n3)+Pontuacao(n4)+Pontuacao(n5)+Pontuacao(n6)+Pontuacao(n7)+Pontuacao(n8)+Pontuacao(n9)+Pontuacao(n10)<< endl;
}
