#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin>>w>>x>>y>>z;
        int res;
        res = w + (x-y) * z;
        cout<<res<<endl;
    }
    return 0;
}