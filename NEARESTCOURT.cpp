#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        float z;
        cin >> x >> y;
        if (abs(x - y) == 1)
            cout << 1 << endl;
        else
        {
            z = abs((x - y) / 2.0f);
            cout << ceil(z) << endl;
        }
    }
    return 0;
}