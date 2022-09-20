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
const int INF = 2e9 + 1;
const int mod = 1e9 + 7;
const int N = 1000;
int cnt[26];
ll a[200000 + 10];
ll b[200000 + 10];
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
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}

	long long int p = a[1]-a[0];
	for (int i = 1; i < n; i++)
	{
		p = gcd(p, a[i] - a[0]);
	}
	if(n==1)
	{
		for (int i = 0; i < m; i++)
		{
			cout<<a[0]+b[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for (int i = 0; i < m; i++)
	{
		cout << abs(gcd(a[0] + b[i], p)) << " ";
	}
	cout << endl;
	return;
}
int main()
{
	solve();
	return 0;
}