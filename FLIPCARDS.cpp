#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n, x;
        cin>>n>>x;
        if(x==0)   cout<<"0"<<endl;
        else if(n==x) cout<<"0"<<endl;
        else{
            int tot = n - x;
            cout<<min(tot,x)<<endl;
        }
    }
    return 0;
}