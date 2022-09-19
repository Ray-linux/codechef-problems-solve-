#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r; // X, YY, NN and RR — the cost of a normal burger, the cost of a premium burger, the number of burgers Chef wants to buy and the amount of money Chef has.
        cin >> x >> y >> n >> r;

        if (r / y >= n)
        {
            cout << "0 " << n << endl;
        }
        else if (r / x < n)
        {
            cout << "-1" << endl;
        }
        else
        {
            int k = (r - (y * n)) / (x - y);
            if ((r - (y * n)) % (x - y) != 0)
                k += 1;
            cout << k << " " << n - k << endl;
        }
    }
    return 0;
}