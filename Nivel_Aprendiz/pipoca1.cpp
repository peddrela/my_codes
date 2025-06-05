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
    int meulugar = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            meulugar = i;
        }
    }
    int direita = 0;
    for (int i = meulugar + 1; i < n; i++)
    {
        if (a[i] == 1)
        {
            direita++;
        }
        if (a[i] == 0)
        {
            continue;
        }
    }
    int esquerda = 0;
    for (int i = meulugar - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            esquerda++;
        }
        if (a[i] == 0)
        {
            continue;
        }
    }

    if (esquerda > direita)
    {
        cout << "direita\n";
    }
    if (esquerda == direita)
    {
        cout << "tanto faz\n";
    }
    if (esquerda < direita)
    {
        cout << "esquerda\n";
    }

    return 0;
}