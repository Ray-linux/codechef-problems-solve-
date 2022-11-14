#include <iostream>
#include <map>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool flag = false;
        map<char, int> str;
        if(n%2==0)
        {
            for (int i = 0; i < n; i++)
            {
                str[s[i]]++;
            }
            for (auto i : str)
            {
                if (i.second % 2)
                {
                    flag = true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if (!flag)
            {
                cout<<"YES"<<endl;
            }
        }
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
