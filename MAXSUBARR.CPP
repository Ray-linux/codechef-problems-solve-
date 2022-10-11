#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int arr1[n + 1];
        for (int i = 1; i <= n; ++i)
            cin >> arr1[i];
        int arr2[m + 1];
        for (int i = 1; i <= m; ++i)
            cin >> arr2[i];

        int sum = 0;

        for (int i = 1, s = 0; i <= n; ++i)
        {
            s = s + arr1[i];
            sum = max(sum, s);
        }
        for (int i = n, s = 0; i >= 0; --i)
        {
            s = s + arr1[i];
            sum = max(sum, s);
        }
        for (int i = 1; i <= m; ++i)
        {
            if (arr2[i] >= 0)
                sum = sum + arr2[i];
            cout << sum << endl;
        }
    }
    return 0;
}