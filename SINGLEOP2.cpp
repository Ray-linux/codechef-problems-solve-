    #include <iostream>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            int n;
            string str;
            cin>>n>>str;
            int c = 1;
            for(int i = 0; i<n-1; i++){
                if(str[i+1]=='1') break;
                else c++;
            }
            cout<<c<<endl;
        }
        return 0;
    }