#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maiorP = 0;
    int local;
    for (int i = 1; i < n; i++)
    {
        if (maiorP < a[i])
        {
            maiorP = a[i];
            local = i;
        }
    }
    int dist = 0;
    for (int i = local + 1; i < n; i++)
    {
        if (maiorP > a[i])
        {
            dist++;
        }
        if (maiorP == a[i])
        {
            break;
        }
    }
    
    cout << dist << endl;

    return 0;
}