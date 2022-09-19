#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0){
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    for (int i = 0; i <n; i++)
    {
        if(str[i]=='A'){
            str[i] = 'T';
        }
        else if (str[i]=='T')
        {
            str[i] = 'A';
        }
        else if (str[i]=='C')
        {
            str[i] = 'G';
        }
        else if (str[i]=='G'){
            str[i] = 'C';
        }
    }
    cout<<str<<endl;
    t--;
    }

    return 0;
}