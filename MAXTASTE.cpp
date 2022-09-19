#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int max_f = a;
        int max_s = c;
        if (max_f < b)
            max_f = b;
        if (max_s < d)
            max_s = d;
        int tot = max_f + max_s;
        cout << tot << endl;
    }
    return 0;
}