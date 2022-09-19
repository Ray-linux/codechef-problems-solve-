#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int a = 1; a < sqrt(x); a++)
        {
            if((x-(2*a))%(a+2)==0 && x!=2*a){
                flag+=1;
                break;
            }
        //     for (int b = 1; b < sqrt(x); b++)
        //     {
        //         if ((2 * a + 2 * b + a * b) == x)
        //         {
        //             flag = true;
        //             break;
        //         }
        //     }
        //     if (flag == true)
        //     {
        //         cout << "YES" << endl;
        //         break;
        //     }
        // }
        // if (flag == false)
        //     cout << "NO" << endl;
        if(flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}