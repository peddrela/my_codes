#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int d[n];

    for (int i = 0; i < n; i++)
    {
        d[i] = a[i] + b[i] + c[i];

        cout << d[i] << " ";
    }
    cout << endl;
}