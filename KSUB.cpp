#include<bits/stdc++.h>
#define vcc vector
using namespace std;
// int gcd(int a, int b)
// {
//     if (a == 0)
//        return b;
//     if (b == 0)
//        return a;
//     if (a == b)
//         return a;
//     if (a > b)
//         return gcd(a-b, b);
//     return gcd(a, b-a);
// }
void solve(){
    vcc <int> arr;
    int a,b, x, as = 0;
    cin>>a>>b;
    for(int i =0; i<a; i++){
        cin>>x;
        as = gcd(as,x);
        arr.push_back(x);
    }x = 0;
    int ma = 0;
    for(int i = 0; i<a; i++){
        x = gcd(x, arr[i]);
        if(x==as){
            ma++;
            x = 0;
        }
    }
    (ma>=b)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}
int main()
{  
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}