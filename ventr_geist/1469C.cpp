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
int a[200000 + 10];
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
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int l = a[0];
	int r = a[0];
	for (int i = 1; i < n; i++)
	{
		l = max(l - k + 1, a[i]);
		r = min(r + k - 1, a[i]+k-1);
		if (r < l)
		{
			cout << "NO" << endl;
			return;
		}
	}
	if (a[n - 1] < l || a[n - 1] > r)
	{
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;
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