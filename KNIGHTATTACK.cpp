#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (y2 % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}
