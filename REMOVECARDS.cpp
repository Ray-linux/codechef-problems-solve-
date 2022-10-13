#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a;
    cin >> a;
    map<int, int> mp;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        mp[b]++;
    }
    int m = -99;
    for (auto i : mp)
    {
        if (i.second >= m)
            m = i.second;
    }
    int res = a - m;
    cout << res << endl;
    }
    return 0;
}