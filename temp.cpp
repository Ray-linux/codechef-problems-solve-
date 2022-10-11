#include <iostream>
using namespace std;
int main()
{
    int res = 1 & 1;
    res = 2 & res;
    cout<<res<<endl;
    return 0;
}