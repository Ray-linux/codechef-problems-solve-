#include <iostream>
using namespace std;
void isThereVowelOrNot(string s)
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }
    if (count > 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (s.length() <= 4)
            cout << "YES" << endl;
        else
        {
            isThereVowelOrNot(s);
        }
    }
    return 0;
}