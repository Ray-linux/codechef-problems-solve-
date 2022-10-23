#include <bits/stdc++.h>
using namespace std;
int subArray(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            count++;
        }
    }
    return count;
}

// Driver program
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // int n = sizeof(arr) / sizeof(arr[0]);
        // cout << "All Non-empty Subarrays\n";
        cout << subArray(arr, n) << endl;
    }
    return 0;
}
