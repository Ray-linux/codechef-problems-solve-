#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int res = abs(a - b);
        cout << res << endl;
    }
    return 0;
}