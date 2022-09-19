#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int z = 1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<z<<" ";
            z++;
        }
        cout<<endl;
        
    }
    
    return 0;
}
