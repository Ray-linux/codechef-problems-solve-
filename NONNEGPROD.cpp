#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, neg = 0;
        cin >> n;
        bool arrayAllPositive = true;
        bool arrayHaveZero = false;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                arrayHaveZero = true;
            if (arr[i] < 0)
            {
                neg++;
                arrayAllPositive = false;
            }
        }

        if (arrayAllPositive || arrayHaveZero)
            cout << "0" << endl;
        else{
            if(neg%2==0)
                cout<<"0"<<endl;
            else
                cout<<"1"<<endl;
        }
    }
        return 0;
}