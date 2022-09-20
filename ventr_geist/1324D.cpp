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
    vector<int> a(n), b(n), c(n);
    for (int &it : a)
        cin >> it;
    for (int &it : b)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c.begin(), c.end());
    ll ans = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if (c[i] <= 0)
            break;
        int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
        ans += i - pos;
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