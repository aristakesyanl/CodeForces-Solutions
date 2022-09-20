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
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 1000;
int a[3500 + 10];
int b[3500 + 10];
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
void solve()
{
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	k = min(k, m - 1);
	for (int i = 1; i <= m; i++)
	{
		b[i] = max(a[i], a[i + n - m]);
	}
	int ans = 0;
	for (int x = 0; x <= k; x++)
	{
		int t = INF;
		for (int y = 0; y <= m - 1 - k; y++)
		{
			t = min(t, b[y + x + 1]);
		}
		ans = max(ans, t);
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
	return 0;
}