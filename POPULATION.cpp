#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int tot = x - y + z;
        cout << tot << endl;
    }
    return 0;
}