#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a > c)
            cout << "Setter" << endl;
        if (b > a && b > c)
            cout << "Tester" << endl;
        if (c > a && c > b)
            cout << "Editorialist" << endl;
    }
    return 0;
}