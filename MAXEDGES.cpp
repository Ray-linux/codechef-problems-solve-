#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k, l;
        long long ans;
        cin>>n>>k>>l;
        int temp;

        if(k+l<n){
            // n = abs(n);
            // l = l-n;
            temp = n -(k+l);
            ans = k*(temp+l) + (temp * l) + (temp*(temp-1))/2;
        }
        else{
            temp = (k+l) - n;
            k = k - temp;
            l = l - temp;
            temp = 0;
            ans = k*(temp+l) + (temp * l) + (temp*(temp-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}