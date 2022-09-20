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
int dp[1025][25];
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
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	if (k == 1)
	{
		cout << s << endl;
		return;
	}
	else
	{
		if (s[0] != s[k - 1])
		{
			cout << s[k - 1] << endl;
			return;
		}
		else if (s[k] == s[n - 1])
		{
			int p = n - k;
			int q = p / k;
			if (p % k != 0)
			{
				cout << s[k - 1];
				for (int i = 0; i <= q; i++)
				{
					cout << s[k];
				}
				cout << endl;
				return;
			}
			else
			{
				cout << s[k - 1];
				for (int i = 0; i < q; i++)
				{
					cout << s[k];
				}
				cout << endl;
				return;
			}
		}
		else
		{
			for (int i = k - 1; i < n; i++)
			{
				cout << s[i];
			}
			cout << endl;
			return;
		}
	}
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