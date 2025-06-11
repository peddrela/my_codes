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
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] - a[i - 1]) % 2 != 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << "Legal" << endl;
    }
    else
    {
        cout << "Chato" << endl;
    }

    return 0;
}