#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */

        int n;
        cin>>n;
        int arr[n];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        int ans=INT_MIN;
        for(auto pa : m)
        {
            ans = max(ans, pa.second);
        }

        cout<<n-ans<<endl;
    }
    
    return 0;
}
