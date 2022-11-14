#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void primeFactors(int a, int n)
{
    vector<int> arr;
    while (n % 2 == 0)
    {
        arr.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)    
    {
        while (n % i == 0)
        {
            arr.push_back(i);
            n = n / i;
        }
    }

    if (n > 2)
        arr.push_back(n);
    
    int flag = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (a % arr.at(i) == 0)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        primeFactors(a, b);
    }

    return 0;
}