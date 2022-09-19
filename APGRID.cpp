#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
    int t,n,m;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        if(n<m){
            for (int i = 0; i < m; i++)
            {
                    cout<<i + 1<<" ";
            }cout<<endl;
            ll add = n + 2;
            for (int i = 1; i < n; i++)
            {
                ll sum = add;
                cout<<sum<<" ";
                for(int j=1; j < m; j++){
                    sum +=i+1;
                    cout<<sum<<" ";
                }
                add +=n+1;
                cout<<endl;
            }
            
            
        }
        else{
            ll sum, add = m+1;
            for (int i = 0; i < n; i++,add++)
            {
                sum = i+1;
                cout<<sum<<" ";
                for (int j = 1; j < m; j++)
                {
                    sum +=add;
                    cout<<sum<<" ";
                }
                cout<<endl;
                
            }
            
        }
        /* code */
    }
    return 0;
    
}