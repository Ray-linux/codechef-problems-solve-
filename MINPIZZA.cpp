#include <iostream>
#include <math.h>
using namespace std;
float numberOfPizza(float x, float y)
{
    float res;
    res = (x * y) / 4;
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout<<ceil(numberOfPizza(a, b))<<endl;
    }

    return 0;
}