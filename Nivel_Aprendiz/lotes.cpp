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

    int meulote = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            meulote = i;
        }
    }
    int count = 0;
    for (int i = meulote + 1; i < n; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
        else if (a[i] == 1)
        {
            break;
        }
    }
    for (int i = meulote - 1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            count++;
        }
        else if (a[i] == 1)
        {
            break;
        }
    }

    cout << count << endl;
    return 0;
}