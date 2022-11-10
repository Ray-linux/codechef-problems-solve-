#include<iostream>
#include<vector>
#include<map>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   vector<int> arr(n);
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   map<int, int> mp;
   for (int i = 0; i < n; i++)
      mp[arr[i]]++;
   int mn = n;
   for (auto i : mp)
   {

      int val = 0;
      if (i.first & 1)
         val = i.first - 1;
      else
         val = i.first + 1;
      int ans = i.second;
      auto it = mp.find(val);
      if (it != mp.end())
         ans += mp[val];
      if (n - ans < mn)
         mn = n - ans;
   }
   cout << mn << endl;
}



void solve2(){
    solve();
}

void solve3(){
    solve2();
}

int main()
{
   
   int t;
   cin >> t;
   while (t--)
   {
      solve3();
   }
   return 0;
}