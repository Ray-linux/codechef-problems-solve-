#include <iostream>
#include <algorithm>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n <= 2)
        {
            cout << s << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}