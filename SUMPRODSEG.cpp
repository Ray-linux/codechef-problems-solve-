    #include <bits/stdc++.h>
    #define ll long long
    #define pll pair<ll, ll>
    using namespace std;
    vector<long long> ssm;
    void pc(ll n)
    {
        for (long long i = 1; i <= sqrt(n); i++)
            if (n % i == 0)
            {
                if (n / i == i)
                    ssm.push_back(i);
                else
                    ssm.push_back(i), ssm.push_back(n / i);
            }
        sort(ssm.begin(), ssm.end());
    }
    int main()
    {
        int T;
        cin >> T;
        while (T--)
        {
            ll x, y;
            cin >> x >> y;
            ssm.clear();
            pc(y);
            bool can = false;
            pll one, two;
            for (auto &i : ssm)
            {
                if (i <= y / i)
                {
                    two = {i, y / i};
                    one = {x - (i - 1), i - 1};
                    if (one.first <= one.second)
                    {
                        can = true;
                        break;
                    }
                    one = {y / i + 1, x - (y / i + 1)};
                    if (one.first <= one.second)
                    {
                        can = true;
                        break;
                    }
                }
                else
                    break;
            }
            if (can)
                cout << one.first << " " << one.second << endl
                    << two.first << " " << two.second << endl;
            else
                cout << -1 << endl;
        }
        return 0;
    }