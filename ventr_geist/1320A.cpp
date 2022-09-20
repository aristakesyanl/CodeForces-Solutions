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
const int D = 2e5 + 10;
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
    map<ll, ll> m;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        m[b-i]+=b;
    }
    ll ans = 0;
    for (auto it: m)
    {
        ans = max(ans, it.second );
    }
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