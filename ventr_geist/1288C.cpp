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
// void build()
// {
// 	for (int i = 0; i < 1025; i++)
// 	{
// 		for (int j = 0; j < 23; j++)
// 		{
// 			dp[i][j] = 0;
// 		}
// 	}

// 	for (int i = 0; i < 1025; i++)
// 	{
// 		dp[i][0] = 1;
// 		for (int j = 1; j <= i; j++)
// 		{
// 			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
// 		}
// 	}
// }
// void solve()
// {
// 	int n, m;
// 	cin >> n >> m;
// 	cout << dp[n + 2 * m - 1][2 * m] << endl;

// 	return;
// }
int main()
{
	dp[0][0] = 1;
	for (int i = 1; i < 1025; i++)
	{
		dp[i][0] = 1;
		for (int j = 1; j <= min(i,23); j++)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
		}
	}
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d\n", dp[2 * m + n - 1][2 * m]);

	return 0;
}