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
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 1; i < n - j; i++)
        {
            int temp = a[i - 1];
            if (a[i - 1] > a[i])
            {
                a[i - 1] = a[i];
                a[i] = temp;
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    return 0;
}