#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        int x;
        int tot;
        cin >> x;
        if (x <= 100)
        {
            tot = x;
            cout << tot << endl;
        }
        else if (100 < x && x <= 1000){
            tot = x-25;
            cout << tot << endl;
        }
        else if (1000 < x && x <= 5000){
            tot = x-100;
            cout << tot << endl;
        }
        else if (x > 5000){
            tot = x-500;
            cout << tot << endl;
        }
    }
    return 0;
}