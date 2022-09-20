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
int arr[D];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int u, v, p;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }
    int ans = n;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        p = min(u, v);
        arr[p]++;
        if (arr[p] == 1)
            ans--;
    }

    int q;
    cin >> q;
    int op;
    for (int i = 0; i < q; i++)
    {
        cin >> op;
        if (op == 3)
        {
            cout << ans << endl;
        }
        else if (op == 1)
        {
            cin >> u >> v;
            p = min(u, v);
            arr[p]++;
            if (arr[p] == 1)
                ans--;
        }
        else if (op == 2)
        {
            cin >> u >> v;
            p = min(u, v);
            arr[p]--;
            if (arr[p] == 0)
                ans++;
        }
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();
    return 0;
}