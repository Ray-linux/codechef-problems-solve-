#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a/gcd(a,b)) * b;
}


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    int g, l, count=0;
    int s;
        for(int j = 1; j<=n; j++){
            g = gcd(1,j);
            l = lcm(1,j);
            s = 1 + j*j + g*g + l*l;
            if (s==n && j!=1)
            {
                count+=2;
            }
            else if(s==n && j==1){
                count++;
            }
            
        }
    cout<<count<<endl;
    }
    
    return 0;
}
