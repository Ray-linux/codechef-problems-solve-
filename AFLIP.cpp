#include <bits/stdc++.h>
using namespace std;
#define fora(a) for (int i = 0; i < a; i++)
#define forb(b) for (int j = 0; j < b; i++)
#define isFind(M, num) (M.find(num) == M.end())
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        bool d = true;
        cin >> a >> b;
        if (a == 1 || b == 1)
        {
            int A[a][b];
            int B[a][b];
            fora(a)
            {
                forb(b)
                {
                    cin >> A[i][j];
                }
            }
            fora(a)
            {
                forb(b)
                {
                    cin >> B[i][j];
                }
            }
            fora(a)
            {
                forb(b)
                {
                    if (A[i][j] != B[i][j])
                    {
                        d = false;
                        break;
                    }
                }
            }
        }
        else
        {
            int num;
            map<int, int> A1, A2, B1, B2;
            fora(a)
            {
                forb(b)
                {
                    cin >> num;
                    if ((i + j) % 2 != 0)
                    {
                        if (isFind(A1, num))
                        {
                            A1.insert({num, 1});
                        }
                        else
                        {
                            A1.insert({num, A1[num] + 1});
                        }
                    }
                    else
                    {
                        if (isFind(A2, num))
                        {
                            A2.insert({num, 1});
                        }
                        else
                        {
                            A2.insert({num, A2[num] + 1});
                        }
                    }
                }
            }
            fora(a)
            {
                forb(b)
                {
                    cin >> num;
                    if ((i + j) % 2 != 0)
                    {
                        if (isFind(B1, num))
                        {
                            B1.insert({num, 1});
                        }
                        else
                        {
                            B1.insert({num, B1[num] + 1});
                        }
                    }
                    else
                    {
                        if (isFind(B2, num))
                        {
                            B2.insert({num, 1});
                        }
                        else
                        {
                            B2.insert({num, B2[num] + 1});
                        }
                    }
                }
            }
            for (auto it : A1)
            {
                if (it.second != B1[it.first])
                {
                    d = false;
                    break;
                }
            }
            for (auto it : A2)
            {
                if (it.second != B2[it.first])
                {
                    d = false;
                    break;
                }
            }
        }
        if (d)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}