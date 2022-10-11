
#include <bits/stdc++.h>
using namespace std;


// Driver program to test above function
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		/* code */

		string str;
		cin>>str;
		int l = 0;
		bool c = false;
		for (int i = 0; i < str.size(); i++)
		{
			if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') && (str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u') && (str[i+2] == 'a' || str[i+2] == 'e' || str[i+2] == 'i' || str[i+2] == 'o' || str[i+2] == 'u'))
			c = true;
			// for (int j = i; j < str.size(); j++)
			// {
			// 	if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			// 	{
			// 		l++;
			// 		if (l > 2)
			// 		{
			// 			cout << "HAPPY" << endl;
			// 			c = true;
			// 			break;
			// 		}
			// 		else
			// 		{
			// 			l = 0;
			// 		}
			// 	}
			// }
		}
		if (!c)
			cout << "SAD" << endl;
		else
			cout<<"HAPPY"<<endl;
	}
	return 0;
}
