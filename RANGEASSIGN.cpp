#include <iostream>
#include <vector>
#define vcc vector
using namespace std;

void solve1(){
     int n;
        cin>>n;
        vcc<int> arr(n);
        for(int i = 0; i<n; i++)
            cin>>arr[i];
        if(n<=2){
            cout<<"YES"<<endl;
        }
        else if(arr[0] == arr[n - 1] || arr[0] == arr[n - 2] || arr[1] == arr[n - 1]){
            cout<<"YES"<<endl;
        }
        else{
            bool flag = true;
            int min = arr[0];
            for(int i = 0; i<n-2; i++){
                if(arr[i] == min){
                    if(arr[i+1] == arr[n-1]){
                        cout<<"YES"<<endl;
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
                cout<<"No"<<endl;
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
       solve1();
    }
return 0;
}