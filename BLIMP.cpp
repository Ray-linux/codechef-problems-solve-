#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sp = 0;
        if (x <= y)
        {
            ll z = *max_element(all(a));
            if (z <= 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << (z + y - 1) / y << endl;
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                a[i] = max(a[i], 0ll);
            }
            ll ra = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                a[i] -= ra;
                a[i] = max(a[i], 0ll);
                ll r = (a[i] + x - 1) / x;
                ra += y * r;
                sp += r;
            }
            cout << sp << endl;
        }
    }
    return 0;
}