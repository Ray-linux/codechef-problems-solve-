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
        // int arr[n];
        // for (int i = 0; i < n; i++)
        //     cin >> arr[i];

        string str;
        cin>>str;
        int count = 0;
        for (int i = 0; i < n; i++)
            if (str[i] == str[i + 1])
                count++;

        cout << count << endl;
    }
    return 0;
}