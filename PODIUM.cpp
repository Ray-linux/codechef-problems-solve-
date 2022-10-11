#include <iostream>
using namespace std;
int time(int x, int y)
{
    int res = x + y;
    return res;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << time(a, b) << endl;
    }
    return 0;
}