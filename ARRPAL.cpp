#include <iostream>
using namespace std;

bool palindrome(int arr[], int n)
{
    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    // bool f = false;
    if (flag == 1)
        return 0;
    // cout << "Not Palindrome";
    else
        return 1;
    // cout << "Palindrome";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int arr[n];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (palindrome(arr, n))
            cout << "0" << endl;
        else
        {
            if (arr[0] > arr[n - 1])
                cout << "-1" << endl;
            else
                cout << arr[n - 1] - arr[0] << endl;
        }
    }
    return 0;
}