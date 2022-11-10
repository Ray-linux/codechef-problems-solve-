#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, sub;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    int ans = 0;
    for (i = 0; i < n; i++)
    {
        if (str1[i] > str2[i])
        {
            sub = 26 - (str1[i] - str2[i]);
            ans = ans + sub;
        }
        else
        {

            int d = str2[i] - str1[i];

            ans = ans + d;
        }
    }
    cout << min(abs(ans % 26 - 26), ans % 26) << endl;
}
int main()

{
    int t;
    cin >> t;
    while (t--)
    {   
        solve();
    }
    return 0;
}