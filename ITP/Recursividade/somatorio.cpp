#include <iostream>
using namespace std;

int somatorio(int tam, int seq[]){
    if (tam == 1)
    {
        return seq[0];
    }
    return seq[tam-1] + somatorio(tam-1, seq);    
}

int main(){
    int t;
    cin >> t;
    int s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    
    cout << somatorio(t, s) << endl;
}