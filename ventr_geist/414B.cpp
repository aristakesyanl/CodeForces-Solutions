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
int dp[2000 + 10][2000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int j = 1; j <= n; j++)
    {
        dp[1][j] = 1;
    }

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int p = j; p <= n; p += j) // all the multiplies of j
            {
                dp[i][p]+= dp[i - 1][j];
                dp[i][p]%=mod;
            }
        }
    }

    int ans = 0;

    for (int j =1; j <= n; j++)
    {
        ans=(ans+dp[k][j])%mod;
    }
    cout << ans << endl;
    // for (int i = 1; i <= k; i++)
    // {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    //cout<<endl;
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