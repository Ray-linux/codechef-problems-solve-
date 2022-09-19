// #include<iostream>
// #include<vector>
// #include<queue>
#include<bits/stdc++.h>
#define ll long long
#define vcc vector
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        vcc <ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        priority_queue<ll, vcc<ll>, greater<ll>>pq;
        for(auto i:a){
            pq.push(i);
        }
        while(y>0){
            ll mn=pq.top();
            if((mn^x)>mn){
                pq.pop();
                pq.push(mn^x);
                y--;
            }
            else{
                if((y&1)==0) break;
                else{
                    pq.pop();
                    pq.push(mn^x);
                    break;
                }
            }
        }
        int cont=0;
        while(!pq.empty()){
            a[cont] = pq.top();
            pq.pop();
            cont++;
        }
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
   }
   return 0;
}