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
int ch[N + 10][N + 10];
int arr[N + 10];
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
void build()
{
	for (int i = 0; i <= N; i++)
	{
		ch[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			ch[i][j] = (ch[i - 1][j - 1] + ch[i - 1][j]) % mod;
		}
	}
}
void solve()
{
	build();
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int cnt1 = 0;
	int cnt = 0;
	for (int i = 0; i <n ; i++)
	{
		if (arr[i] == arr[n - k])
			cnt++;
		if (arr[i] > arr[n - k])
			cnt1++;
	}
	cout << ch[cnt][k - cnt1] << endl;
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