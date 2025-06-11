#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N > 0)
    {
        int x, y;
        cin >> x >> y;
        int soma = 0;
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                soma += i;
            }
        }
        cout << soma << endl;
        N--;
    }
    return 0;
}