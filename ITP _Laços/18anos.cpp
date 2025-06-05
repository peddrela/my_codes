#include <iostream>
using namespace std;

int main()
{
    int a[6];
    int count18 = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        if (a[i] > 18)
        {
            count18++;
        }
    }
    cout << count18 << endl;

    return 0;
}