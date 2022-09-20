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
int a[100000 + 10];
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int min1 = *min_element(a.begin(), a.end());
    int cnt = 0;

    for (int x : a)
    {
        if (min1 == x)
            cnt++;
        if ((min1 & x) != min1)
        {
            printf("0\n");
            return;
        }
    }
    int count = (1ll * cnt * (cnt - 1)) % mod;
    for (int i = 1; i <= n - 2; i++)
    {
        count = (1ll * count * i) % mod;
    }
    cout << count << endl;

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