#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, b, y;
        cin>>a>>x>>b>>y;
        double alice = a/x;
        // float bob = b/y;

        cout<<alice<<endl;
        // cout<<bob<<endl;

        // if(alice>bob)
        //     cout<<"Alice"<<endl;
        // else if( alice<bob)
        //     cout<<"Bob"<<endl;
        // else
        //     cout<<"Equal"<<endl;
    }
    return 0;
}