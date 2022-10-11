#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans1 = a - b, ans2 = ans1-c;
    cout << ans1 << " " << ans2 << endl;
    return 0;
}