#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y;
    /*
    here
    a is used for the number of pens
    b is used for the number of pencils
    x is used for the cost of the pen and
    y is used for the cost of the pencil

    */

    cin >> a >> b >> x >> y;
    // now, we can find the total cost for to buy "a" pens and "b" pencils

    int tot = a * x + b * y;
    cout << tot << endl;

    return 0;
}