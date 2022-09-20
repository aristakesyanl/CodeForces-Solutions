#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
ll arr[100000 + 10];
ll pre[100000 + 10];
ll suf[100000 + 10];
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
		cin >> arr[i];
	}
	pre[0] = arr[0];
	for (int i = 1; i < n; i++)
	{
		pre[i] = gcd(pre[i - 1], arr[i]);
	}
	suf[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		suf[i] = gcd(suf[i + 1], arr[i]);
	}
	// for (int i = n-1; i>=0 ; i--)
	// {
	// 	cout<<suf[i]<<" ";
	// }
	// cout<<endl;
	//ll res;
	ll ans;
	//cout<<pre[n-2]<<" "<<suf[1]<<endl;
	ans = pre[n - 2] * suf[1];
	ans /= gcd(pre[n - 2], suf[1]);
	for (int i = 1; i < n - 1; i++)
	{
		ans *= gcd(pre[i - 1], suf[i + 1]) / gcd(gcd(pre[i - 1], suf[i + 1]), ans);
	}
	cout << ans << endl;
}
int main()
{
	solve();
	return 0;
}