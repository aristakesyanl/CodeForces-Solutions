#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
const int mod = 1e9 + 7;
const int N = 1000;
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
	int count = n - k + k / 2;
	cout << count << endl;
	for (int i = (k + 1) / 2; i < k; i++)
	{
		cout << i << " ";
	}
	for (int i = k + 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}