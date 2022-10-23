#include <iostream>
#define int long long
using namespace std;
int s, x, y, z;
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;
        s = x = y = 0;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i <= a; ++i)
        {
                x += arr[i - 1]==0;
                y += arr[i - 1]==1;

            z = min(x, y);
            x -= z;
            y -= z;
            s += z;
        }

        cout << s + y / 3 << endl;
    }
    return 0;
}
