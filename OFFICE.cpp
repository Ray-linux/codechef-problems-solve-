#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x, y;
        cin >> x >> y;
        int tot = (x * 4) + y;
        cout << tot << endl;
    }
    return 0;
}