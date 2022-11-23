#include <iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
  
    if (n <= 1)
        flag = 0;
  
    if (flag == 1) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    int n = a+b;
	    if(isPrime(n))
	        cout<<"Alice"<<endl;
	    else
	        cout<<"Bob"<<endl;
	    
	}
	return 0;
}
