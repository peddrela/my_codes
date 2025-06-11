#include <iostream>
using namespace std;

int maior(int tam, int seq[]){
    if (tam == 1)
    {
        return seq[0];
    }
    int max = maior(tam-1, seq);
    return max > seq[tam-1] ? max : seq[tam-1];
}

int main (){
    int t;
    cin >> t;
    int s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    cout << maior(t, s);    
}