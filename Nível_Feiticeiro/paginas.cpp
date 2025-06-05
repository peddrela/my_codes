#include <iostream>
using namespace std;

int main (){
    int m, n;

    cin >> m >> n;

    int paginas;

    bool digitalizadas[1001] = {false};

    for (int i = 0; i < n; i++)
    {
        cin >> paginas;
        digitalizadas[paginas] = true;
    }
    
    for (int i = 1; i <= m; i++)
    {
        if (!digitalizadas[i])
        {
            cout << i << " ";
        }
        
    }
    return 0;
}