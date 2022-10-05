#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int len , part;
        cin>>len>>part;
        if(len%part==0)
            cout<<"0"<<endl;
        else
            cout<<"1"<<endl;
    }
    return 0;
}