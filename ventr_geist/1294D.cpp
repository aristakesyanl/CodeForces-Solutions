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
int b[400000 + 10];
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
void solve()
{
	int n, x;
	cin >> n >> x;
	int mex = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		b[a % x]++;
		while (b[mex % x])
		{
			b[mex % x]--;
			mex++;
		}
		cout << mex << endl;
	}
	return;
}
int main()
{
	solve();
	return 0;
}