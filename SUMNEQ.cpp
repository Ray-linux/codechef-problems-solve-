#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin>>n;
    for(int i = 1; i<n; i++){
        for(int j = 1; j<n; j++){
            if((i+j)==n)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}