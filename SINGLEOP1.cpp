#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        int c = 0;
        // cout<<str[0]<<endl;
        for(int i = 0; i<n; i++){
            if(str[i]=='1')
                c++;
            else
                break;
        }

        cout<<c<<endl;
    }
    return 0;
}