#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int f;
        cin >> f;
        if (f > 98)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}