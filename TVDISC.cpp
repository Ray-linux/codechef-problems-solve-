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
        int tot1 = a - c;
        int tot2 = b - d;
        if (tot1 == tot2)
            cout << "Any" << endl;
        else if (tot1 < tot2)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
    return 0;
}