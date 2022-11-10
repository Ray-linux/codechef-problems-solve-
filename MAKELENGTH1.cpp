#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        string st;
        cin >> a >> st;
        stack<char> arr;
        arr.push(st[0]);
        for (int i = 1; i < a; i++)
        {
            if (arr.top() == st[i])
            {
                arr.pop();
                arr.push(0);
            }
            else
            {
                arr.push(st[i]);
            }
        }
        if (arr.size() == 1)
            cout << "YES" << endl;
        else
        {
            char c = arr.top();
            arr.pop();
            while (!arr.empty() && arr.top() == c)
                arr.pop();
            if (arr.empty())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}