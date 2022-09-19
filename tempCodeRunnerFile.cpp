#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int g, l, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                g = gcd(arr[i], arr[j + i]);
                l = lcm(arr[i], arr[j + i]);
                if (g == l)
                {
                    count++;
                }
                // cout<<"i = "<<i<<endl;
                // cout<<"j = "<<j+i<<endl;
            }
        }
        cout << count << endl;
    }
    return 0;
}