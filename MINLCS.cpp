#include <iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sssdsd = 0;
        string a, b;
        cin >> n >> a >> b;
        map<char, int> Agdgfdvcrygcv, Bvgcdfgcvdygc;
        for (char i : b)
            Bvgcdfgcvdygc[i]++;
        for (char i : a)
            Agdgfdvcrygcv[i]++;
        for (char i = 'a'; i <= 'z'; ++i)
            sssdsd = max(min(Agdgfdvcrygcv[i], Bvgcdfgcvdygc[i]), sssdsd);
        cout << sssdsd << endl;
    }
    return 0;
}