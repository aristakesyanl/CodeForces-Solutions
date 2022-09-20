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
ll dp[2][100000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> row_1(n), row_2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> row_1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> row_2[i];
    }

    dp[0][0] = row_1[0];
    dp[1][0] = row_2[0];

    for (int i = 1; i < n; i++)
    {
        dp[0][i] = max(dp[0][i - 1], dp[1][i - 1] + row_1[i]);
        dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] + row_2[i]);
    }
    ll ans = max(dp[0][n - 1], dp[1][n - 1]);
    cout << ans << endl;
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