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
int d[100 + 10];
int h[100 + 10];
int a[100 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, x;
    cin >> n >> x;
    int mx = 0;
    int mdiff = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i] >> h[i];
        mx = max(mx, d[i]);
        mdiff = max(mdiff, d[i] - h[i]);
    }

    int res = 1;
    x -= mx;
    if (x > 0)
    {
        if (mdiff <= 0)
        {
            cout << -1 << endl;
            return;
        }
        res += (x + mdiff - 1) / mdiff;
    }
    cout << res << endl;
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