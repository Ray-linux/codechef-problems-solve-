#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n, x;
    cin>>n>>x;
    int tot_can;
    int pak;
    if(n>x){
        tot_can = n - x;
        pak = tot_can/4;
        if(tot_can%4!=0){
            cout<<pak+1<<endl;
        }
        else{
            cout<<pak<<endl;
        }
    }
    else if(n<=x){
        pak = 0;
        cout<<pak<<endl;
    }
    }
    return 0;
}