#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x, y;
        cin >> x >> y;
        if (x % 2 == 1 && y % 2 == 1)
            cout << "NO" << endl;
        else if (x == 1 || y == 1)
            cout << "NO" << endl;

        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}