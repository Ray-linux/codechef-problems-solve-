#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,b[200001],cp [200001][2];
void solve() {
cin>>n>>x;
for (int i=1;i<=n; ++i)
cin >> b[i];
for(int i=2;i<=n; ++i) {
cp[i][0]=max(cp[i-1][0]+(b[i-1]^b[i]),cp[i-1][1]+((b[i-1]+x)^b[i]));
cp[i][1]=max(cp[i-1][0]+(b[i-1]^(b[i]+x)),cp[i-1][1]+((b[i-1]+x)^(b[i]+x)));
}
cout <<max(cp[n][0],cp [n][1]) << endl;
}


signed main() {
int T;
cin >> T;
while(T--) solve();
}