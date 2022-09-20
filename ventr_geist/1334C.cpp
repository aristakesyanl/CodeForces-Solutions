#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;
typedef long long ll;
const ll INF = 2e18 + 1;
const int mod = 1e9 + 7;
const int N = 1000;
ll a[300000 + 10];
ll b[300000 + 10];
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
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cin >> b[i];
	}
 
	ll ans = 0;
	ll mn = INF;
	for (int i = 0; i < n; i++)
	{
		int ni = (i + 1) % n;
		ll val = min(a[ni], b[i]);
		ans += a[ni] - val;
		mn = min(mn, val);
	}
	ans += mn;
	cout << ans << endl;
	return;
}
int main()
{
    ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}