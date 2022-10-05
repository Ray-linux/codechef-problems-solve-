#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int a, b, x;
        cin>>a>>b>>x;
        int resA1, resB1, resA2, resB2;
        resA1 = a + x;
        resB1 = b - x;
        resA2 = a - x;
        resB2 = b + x;
        if(resA1 == resB1)
            cout<<"YES"<<endl;
        else if (resA2 == resB2)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}