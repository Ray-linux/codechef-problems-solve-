#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    bool flag = false;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(int i = 0; i<n-1; i++){
	        if(k == arr[i])
	            flag = true;
	    }
	    if(n==1 && k==arr[0]){
	        cout<<"YES"<<endl;
	    }
	    else if(!flag)
	        cout<<"NO"<<endl;
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	}
	
	return 0;
}
