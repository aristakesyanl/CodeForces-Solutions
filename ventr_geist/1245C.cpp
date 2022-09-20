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
#include <stack>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
int a[20];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> dp(n + 1);
    for (char ch : s)
    {
        if (ch == 'm' || ch == 'w')
        {
            cout << 0 << endl;
            return;
        }
    }

    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= s.size(); i++)
    {
        dp[i] = dp[i - 1];
        if (s[i-1] == s[i - 2] && (s[i-1] == 'u' || s[i-1] == 'n'))
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
        }
    }
    cout << dp[n] << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}