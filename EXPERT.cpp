#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        float a, b;
        cin >> a >> b;
        if (b >= a / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
