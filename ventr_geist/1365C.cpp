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
int a[200000 + 10];
int b[200000 + 10];
int change[200000 + 10];
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
    int p;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        a[p] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        b[p] = i;
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= b[i])
            change[a[i] - b[i]]++;
        else
        {
            change[a[i] - b[i] + n]++;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        res = max(res, change[i]);
    }
    cout << res << endl;
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