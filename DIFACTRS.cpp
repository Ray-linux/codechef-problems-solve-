#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int flag = 0;
    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    cout<<flag<<endl;
    for (int i = 1; i <=n; i++)
    {
        if (n % i == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}