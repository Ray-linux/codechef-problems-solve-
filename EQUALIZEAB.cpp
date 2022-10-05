    #include <iostream>
    using namespace std;
    int main()
    {
        int test;
        cin>>test;
        while(test--){
            int a, b, x;
            cin>>a>>b>>x;
            if((b-a)%(x*2)==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        return 0;
    }