#include<iostream>
#define mod 998244353
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long sum = 0;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n;i++){
            cin>>arr[i];
            sum = (sum + arr[i])%mod;
        }
        sum = (sum*(sum-1))%mod;
        cout<<sum<<endl;
    }
return 0;
}