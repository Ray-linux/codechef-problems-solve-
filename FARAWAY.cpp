#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin>>arr[i];
        
        long long min = 1, mx = m;
        long long s = 0;
        for(int i = 0; i<n; i++){
            s += max(abs(arr[i] -1) , abs(arr[i]  - mx));
        }
        cout<<s<<endl;
    }
    return 0;
}