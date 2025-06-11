#include <iostream>
using namespace std;

void mostrarHorario(int h, int m, int s) {
    // Ajusta os valores se passarem dos limites
    m += s / 60;
    s = s % 60;
    h += m / 60;
    m = m % 60;
    h = h % 24;
    
    // Formata a saída com 2 dígitos
    if (h < 10) cout << "0";
    cout << h << ":";
    if (m < 10) cout << "0";
    cout << m << ":";
    if (s < 10) cout << "0";
    cout << s << endl;
}

int main (){
    int h, m, s;

    cin >> h >> m >> s;

    mostrarHorario(h+1, m, s);
    mostrarHorario(h+2, m+10, s+30);
    mostrarHorario(h+4, m+40, s+50);
    mostrarHorario(h+12, m+5, s+5);
    return 0;
}