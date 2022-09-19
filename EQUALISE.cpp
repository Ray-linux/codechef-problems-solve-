#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mi = min(a, b);
        int ma = max(a, b);
        if (a == b)
            cout << "YES" << endl;
        else
        {
            while (mi != ma)
            {
                mi = mi * 2;
                if (mi > ma)
                    break;
            }
            if (mi == ma)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}