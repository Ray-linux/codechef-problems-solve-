#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        string ans = "NO";
        int d = min(min(a, b), min(b, c));
        if (a == b && a == d)
        {
            ans = "YES";
        }
        else if (a == c && a == d)
        {
            ans = "YES";
        }
        else if (b == c && b == d)
        {
            ans = "YES";
        }
        cout << ans << endl;
    }
    return 0;
}