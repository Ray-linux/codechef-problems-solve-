#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[2*n];
	    for(int i = 0; i<2*n; i++){
	        cin>>arr[i];
	    }
	    int count = 1;
	    string ans;
	    for(int i = 0; i<2*n; i++){
	        for(int j = i+1; j<2*n; j++){
	            if(arr[i] == arr[j]){
	                count++;
	            }
	        }
	        if(count>2){
                ans = "NO";
                break;
	        }
	        else{
	            ans = "YES";
	            count = 1;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
