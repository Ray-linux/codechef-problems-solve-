#include <iostream>
using namespace std;
void game(string str, int size)
{
    string t;
    int j = size - 1;
    for (int i = 0; i <=j; i++)
    {
        if (str[i] == '0')
            t = str[i] + t;
        else
            t = t + str[i];
        if (i < j)
        {
            if (str[j] == '0')
                t = t + str[j];
            else
                t = str[j] + t;
            j--;
        }
    }
    cout << t << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        string str;
        cin >> str;
        game(str, size);
    }
    return 0;
}