#include <iostream>
using namespace std;

float divisor (int a, int b){
    if (b == 0)
    {
        return 0;
    }
    
    int q = 0, r;

    for (int i = a - 1; i > 0; i--)
    {
        if (i * a == b)
        {
            q = i;
            break;
            return q;
        }
    }
    return q;
    
    
    
    
    
    

}