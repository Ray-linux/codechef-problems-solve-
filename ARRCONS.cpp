#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> arr;
        vector<int> new_arr;

        int n, m, temp;
        cin >> n >> m;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                arr.push_back({i, j});
            }
        }
        // printing the 2d vector

        // for (int i = 0; i < arr.size(); i++)
        // {
        //     for (int j = 0; j < arr[i].size(); j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << "----------------------------------------------------------------------------" << endl;

        // logic
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = 0; j < arr[i].size(); j++)
            {
                temp = arr[i][j] & arr[i][j + 1];
                // new_arr.push_back(temp);
                // cout<<endl;
                // ans = ans + new_arr[i];
                ans = ans + temp;
            }
        }
        // for (int i = 0; i < new_arr.size(); i++)
        cout << ans << endl;
    }
    return 0;
}