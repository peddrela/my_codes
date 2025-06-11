#include <iostream>
using namespace std;

bool tem_intersecao(int n, int a[], int m, int b[]){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                return true;
            }
        }
    }
    return false;
}

int main (){
    int n, m;

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << tem_intersecao(n, a, m, b) << endl;
    
}