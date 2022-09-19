#include<iostream>
#define int long long
using namespace std;
int n;
string s;
void solve() {
   cin >> n >> s;
   int a=0,b=0;
   for(char c:s) {
      a+=(c=='0');
      b+=(c=='1');
   }
   if(a==0) {cout << n << ' ' << 0 << endl;return;}
   if(b==0) {cout << n << ' ' << 0 << endl;return;}
   cout << 1 << ' ' << abs(a-b)+1 << endl;
   for(int i=0,Q=0;i<abs(a-b);++i) {
      string t;
      for(int j=0;j<(int)s.size()-1;++j)
         if((s[j]=='0'&&s[j+1]=='1')||(s[j]=='1'&&s[j+1]=='0')) {
            Q=j;break;
         }
      cout << Q+1 << ' ' << Q+2 << ' ' << (a>b) << endl;
      for(int j=0;j<(int)s.size();++j)
         if(j!=Q&&j!=Q+1) t+=s[j];
         else if(j==Q) t+=char((a>b)+48);
      s=t;
   }
   cout << 1 << ' ' << s.size() << ' ' << 0 << endl;
}
signed main() {
   int T;
   cin >> T;
   while(T--) solve();
}