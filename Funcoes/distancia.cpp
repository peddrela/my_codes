#include <iostream>
#include <cmath>
using namespace std;

float dist(float x1, float y1, float x2, float y2){
    if (x1 == x2)
    {
        if (y2 > y1)
        {           
        return y2 - y1;
        }
        else
        {
            return y1 - y2;
        }
    }

    if (y1 == y2)
    {
        if (x2 > x1)
        {
            return x2 - x1;
        }
        else
        {
            return x1 - x2;
        }
    }

    int tempy = y1;
    if (y2 < y1)
    {
        y1 = y2;
        y2 = tempy;
    }
    int tempx = x1;
    if (x2 < x1)
    {   
        x1 = x2;
        x2 = tempx;
    }
    return sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));    
}

int main (){
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << dist(x1, y1, x2, y2) << endl;
}