#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string S;
        cin >> n;
        cin >> S;
        string R;
        cin >> R;
        int flag = 0;

        if (S == R)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (S[i] != R[i])
                    flag++;
            }
            if (flag % 2 == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
    return 0;
}