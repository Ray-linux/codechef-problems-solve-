#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[64][n];
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            for (int j = 0; j < 64; j++)
            {
                arr[j][i] = (int)(x % 2);
                x /= 2;
            }
        }
        for (int i = 0; i < 64; i++)
        {
            ll count = 0;
            for (int j = 0; j < n; j++)
            {
                count += arr[i][j];
                arr[i][j] = count;
            }
        }

        while (q--)
        {
            int l1, r1, l2, r2, k;
            cin >> k >> l1 >> r1 >> l2 >> r2;
            l1--;
            l2--;
            r1--;
            r2--;
            int f = r1 - l1 + 1;
            int s = r2 - l2 + 1;
            int bita, gama;
            if (l1 != 0)
            {
                bita = arr[k][r1] - arr[k][l1 - 1];
            }
            else
            {
                bita = arr[k][r1];
            }
            if (l2 != 0)
            {
                gama = arr[k][r2] - arr[k][l2 - 1];
            }
            else
                gama = arr[k][r2];
            ll ans = (long)(bita) * (long)(s - gama) + (long)(f - bita) * (long)(gama);
            cout << ans << endl;
        }
    }
    return 0;
}