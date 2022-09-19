#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, m, x;
    cin>>n>>m>>x;
    int res;
    res = x * (2*(n+m));
    cout<<res<<endl;
    }
    return 0;
}