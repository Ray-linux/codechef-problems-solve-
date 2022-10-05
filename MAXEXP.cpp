#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        string t = "";
        string plusmius = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '+' && s[i] != '-')
                t += s[i];
            else
                plusmius += s[i];
        }
        sort(t.begin(), t.end());
        sort(plusmius.begin(), plusmius.end());
        string ans = "";
        int nn = t.size();
        int ss = plusmius.size();
        int j = ss - 1;
        for (int i = 0; i < nn; i++)
        {
            if (j >= 0)
            {
                ans += t[i];
                ans += plusmius[j];
                j--;
            }
            else
            {
                ans += t[i];
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}