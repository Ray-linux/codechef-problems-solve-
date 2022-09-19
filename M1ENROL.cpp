#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x, y;
    cin>>x>>y;
    int tot;
    if(x>=y)
        cout<<"0"<<endl;
    else if(x<y){
        tot = y -x;
        cout<<tot<<endl;
    }
    }
    return 0;
}