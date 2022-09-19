#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    
    ll int n,m;
    cin>>n>>m;
    ll int ans1, ans2;
    if(m<2*n){
      cout<<m<<" "<<m<<endl;
    }
    else if(m>=2*n && m%n==0){
      cout<<m<<" "<<n<<endl;
    }else{
      ll int x = m/2;
      if (m>=2*n){
        x = 2*n;
      }
      int dif = INT_MIN;
      for(int i = n; i < x; i++){
        ll d = m/i;
        ll int cd = (i*d) - i;
        if(cd>dif){
          ans1 = i;
          ans2 = i*d;
          dif = cd;
        }
      }
      cout<<ans1<<" "<<ans2<<endl;
    }

  }
  return 0;
  
}