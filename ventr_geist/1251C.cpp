#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <utility>
#include <set>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    string s, even, odd;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] - '0') % 2 == 0)
            even += s[i];
        else
            odd += s[i];
    }
    int o = 0, e = 0;
    // if (even.empty())
    // {
    //     cout << odd << endl;
    //     return;
    // }
    // if (odd.empty())
    // {
    //     cout << even << endl;
    //     return;
    // }
    while (1)
    {
        if (o == odd.size() || e == even.size())
        {
            if (o == odd.size())
            {
                for (int i = e; i < even.size(); i++)
                {
                    cout << even[i];
                }
                cout << endl;
                return;
            }
            else
            {
                for (int i = o; i < odd.size(); i++)
                {
                    cout << odd[i];
                }
                cout << endl;
                return;
            }
        }
        if (even[e] - '0' < odd[o] - '0')
        {
            cout << even[e];
            e++;
        }
        else
        {
            cout << odd[o];
            o++;
        }
    }
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}