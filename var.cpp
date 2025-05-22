#include <iostream>
using namespace std;
/*VAR*/
int main()
{
    int nA[10], nB[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> nA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> nB[i];
    }

    double pA[10], pB[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> pA[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cin >> pB[i];
    }

    double menorA = pA[0];
    double maiorB = pB[0];

    for (int i = 0; i < 10; i++)
    {
        if (menorA > pA[i])
        {
            menorA = pA[i];
        }
        if (maiorB < pB[i])
        {
            maiorB = pB[i];
        }
    }

    cout << "A: ";
    int testeA = 0;
    for (int i = 0; i < 10; i++)
    {
        if (pA[i] > 0)
        {
            if (pA[i] > maiorB)
            {
                cout << nA[i] << " ";
                testeA++;
            }
        }
    }
    if (testeA == 0)
    {
        cout << "sem impedimento";
    }
    cout << endl;

    cout << "B: ";
    int testeB = 0;

    for (int i = 0; i < 10; i++)
    {
        if (pB[i] < 0)
        {
            if (pB[i] < menorA)
            {
                cout << pB[i] << " ";
                testeB++;
            }
        }
    }
    if (testeB == 0)
    {
        cout << "sem impedimento";
    }
    cout << endl;

    return 0;
}
