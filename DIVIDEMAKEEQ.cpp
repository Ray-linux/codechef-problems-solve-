#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int min = arr[0];
        for(int i = 1; i<n; i++)
            if(min>arr[i])
                min = arr[i];
                
        bool flag = false;
        for(int i = 0;  i<n; i++)
        {
            if(min!=arr[i])
                if(arr[i]%min==0)
                    count++;
                else{
                    flag = true;
                    break;
                }
        }
        if(!flag)
            cout<<count<<endl;
        else
            cout<<n<<endl;
    }
	return 0;
}
