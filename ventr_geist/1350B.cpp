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
ll dp[100000 + 10];
ll arr[100000 + 10];
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
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[1] < arr[i])
        {
            dp[i] = 2;
        }
        for (int j = 1; (j * j) <= i; j++)
        {
            // if (arr[j] < arr[i] && (i % j) == 0)
            // {
            //     dp[i] = max(dp[i], dp[j] + 1);
            //     int k=i/j;
            //     dp[i]=max(dp[i], dp[k]+1);
            //     cout<<j<<" "<<k<<endl;
            // }
            if (i % j == 0)
            {
                if (arr[j] < arr[i])
                    dp[i] = max(dp[i], dp[j] + 1);
                if (arr[i / j] < arr[i])
                    dp[i] = max(dp[i], dp[i / j] + 1);
            }
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 2 * i; j <= n; j += i)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             dp[j] = max(dp[j], dp[i] + 1);
    //         }
    //     }
    // }

    ll ans = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << endl;

        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //solve();
    return 0;
}