#include <iostream>
using namespace std;
void whoCanFast(float p, float q, float r,float s){
    if(p/r<q/s) cout<<"CHEF"<<endl;
    else if(p/r>q/s) cout<<"CHEFINA"<<endl;
    else cout<<"BOTH"<<endl;
    // cout<<"Chef = "<<p/r<<endl;
    // cout<<"Chefina = "<<q/s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int a, b, c,d;
        cin>>a>>b>>c>>d;
        whoCanFast(a,b,c,d);
    }
    

    return 0;
}