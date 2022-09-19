#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int res = 0;
        for (int i = 0; i < n - 1; i++)
            res = res + arr[i];

        res = res + arr[n - 1 - 1];
        cout << res << endl;
    }
    return 0;
}