#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    if(a*2>b*5)
	        cout<<"Chocolate"<<endl;
	    else if(a*2 == b*5)
	        cout<<"Either"<<endl;
	    else
	        cout<<"Candy"<<endl;
	}
	return 0;
}
