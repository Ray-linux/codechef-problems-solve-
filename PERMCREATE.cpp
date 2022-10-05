#include <iostream>
using namespace std;
void getPermutation(int num)
{
	if (num <= 3) {
		cout << -1;
		return;
	}

	int i = num;

	if (num % 2 == 0)
		i--;
	while (i >= 1) {
		cout << i << " ";
		i -= 2;
	}

	cout << 4 << " " << 2 << " ";
	i = 6;

	while (i <= num) {
		cout << i << " ";
		i += 2;
	}
}

// Driver Code
int main()
{
	int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        getPermutation(num);
        cout<<endl;
    }

	return 0;
}
