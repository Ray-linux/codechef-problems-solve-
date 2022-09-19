#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int t;
    cin>>t;
    while(t--){
    int p;
    cin>>p;
    int r, m, to;
    r = p/100;
    m = p%100;
    to = r+m;
    if(to<=10){
        cout<<to<<endl;
    }
    else
        cout<<"-1"<<endl;

    }
    return 0;
}
