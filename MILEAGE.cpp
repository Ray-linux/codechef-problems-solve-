#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float t;
    cin >> t;
    while (t--)
    {
        float n;   // distance in km
        float x; // price of the petrol
        float y; // price of the diesel
        float a;   // distance coverd by the petrol
        float b;   // distance coverd by the diesel

        cin >> n >> x >> y >> a >> b;

        float tot1, tot2;

        tot1 = ceil(n / a) * x;
        tot2 = ceil(n / b) * y;
        if (tot1 < tot2)
            cout << "PETROL" << endl;
        else if (tot2 < tot1)
            cout << "DIESEL" << endl;
        else
            cout << "ANY" << endl;
    }
    return 0;
}