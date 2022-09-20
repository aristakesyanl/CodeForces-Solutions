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
int arr[200000 + 10];
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
		cin >> arr[i];
	}
	if (n > m)
	{
		cout << 0 << endl;
		return;
	}
	int ans = 1;
	for (int i = 0; i < n; i++)
	{

		for (int j = i + 1; j < n; j++)
		{
			int k = abs(arr[i] - arr[j]) % m;
			ans *= k;
			ans %= m;
		}
	}
	cout<<ans<<endl;
	return;
}
int main()
{
	solve();
	return 0;
}