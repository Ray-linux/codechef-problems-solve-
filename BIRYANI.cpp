#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t>0){
        int x, y;
        cin>>x>>y;
        int z = x * y;
        cout<<z<<endl;
        t--;
    }    
    return 0;
}
