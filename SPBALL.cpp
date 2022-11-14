#include <iostream>
#include<map>
#define mod 1000000007
using namespace std;
long long arr[1000001];

int main()
{
    int t;
    cin >> t;
        arr[0] = 0;
        arr[1] = 1;
        for(long long i = 2; i<=1000000; i++){
            arr[i] = ((arr[i-1] * i)%mod)%mod;
        }
    while(t--){
        int n;
        int s = 0;
        cin>>n;
        map<long long, long long> m;
        for (int i = 0; i < n; i++)
        {
            int cdcdcdc;
            cin>>cdcdcdc;
            m[cdcdcdc]++;
        }
        for(auto i:m){
            s = ((arr[i.first]*i.second)%mod + s)%mod;
        }
        cout<<s<<endl;
        
    }
    return 0;
}