#include <iostream>
#define int long long
using namespace std;
int col[3], s ;
void doit()
{
    s = 0;
    cin>>col[0]>>col[1]>>col[2];

    for (int i = 0; i < 3; ++i)
    {
        if (col[i] != 0)
        {
            col[i]--;
            s++;
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 3; ++j)
        {
            if (col[i] > col[j])
            {
                swap(col[i], col[j]);
            }
        }
    }
    if (col[0] >= 2)
    {
        cout << s + 3 << endl;
        return;
    }
    if (col[0] == 1)
    {
        cout << (col[2] >= 2 ? s + 2 : s + 1) << endl;
        return;
    }
    cout << (col[1] == 0 ? s : s + 1) << endl;
}
signed main()
{
    int t; cin>>t;
    while(t--)
        doit();
    return 0;
}