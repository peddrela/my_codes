#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int countpar = 0, countimpar = 0, countpos = 0, countneg = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)
        {
            countpar++;
        }
        else
        {
            countimpar++;
        }
        if (a[i] > 0)
        {
            countpos++;
        }
        else if (a[i] < 0)
        {
            countneg++;
        }
    }
    cout << countpar << " valores pares\n";
    cout << countimpar << " valores impares\n";
    cout << countpos << " valores positivos\n";
    cout << countneg << " valores negativos\n";
    return 0;
}