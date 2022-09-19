#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t > 0)
    {
        int a, b;
        cin >> a >> b;
        int c;
        if (a > b)
        {
            c = 7 - a;
            cout << c << endl;
        }
        else if (b > a)
        {
            c = 7 - b;
            cout << c << endl;
        }
        else if(a==0 && b==0){
            cout<<"7"<<endl;
        }
        else if(a==b){
            c = 7-a;
            cout<<c<<endl;
        }
        t--;
    }

    return 0;
}
