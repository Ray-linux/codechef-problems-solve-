#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool slove(){
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i <n; i++)
    {
        if(a[i]>a[i+1]){
            if((a[i]+a[i+1])>x)
                return 0;
            else
                swap(a[i],a[i+1]);
        }
    }
    return 1;
}


int main(int argc, char const *argv[])
{
    ll t;
    cin>>t;
    while(t--){
        if(slove())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
