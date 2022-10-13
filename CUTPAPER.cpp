#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b == 1)
            cout << a * a << endl;
        else if (a == b)
            cout << "1" << endl;
        else
            cout << (a/b) << endl;
    }
    return 0;
}