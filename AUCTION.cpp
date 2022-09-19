#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c; // a = alice b = bob c = charlie

        cin >> a >> b >> c;

        int max = a;
        if (max < b)
        {
            max = b;
        }
        if (max < c)
        {
            max = c;
        }
        if (max == a)
            cout << "ALICE" << endl;
        if (max == b)
            cout << "BOB" << endl;
        if (max == c)
            cout << "CHARLIE" << endl;
    }
    return 0;
}