#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
ll p[40000 + 10];
ll len;
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
void build(ll a, ll b)
{
	len = a * b / gcd(a, b);
	p[0] = 0;
	for (int i = 1; i <= len; i++)
	{
		p[i] = p[i - 1];
		if ((i % a) % b != (i % b) % a)
			p[i]++;
	}
}
ll query(ll l)
{
	ll cnt = l / len;
	ll rem = l % len;
	return p[len] * cnt * 1ll + p[rem];
}
void solve()
{
	ll a, b, l, r;
	ll ans;
	int q;
	cin >> a >> b >> q;
	build(a, b);
	// cout<<len<<endl;
	// for (int i = 0; i <= len; i++)
	// {
	// 	cout << p[i] << " ";
	// }
	// cout << endl;
	while (q--)
	{
		cin >> l >> r;
		ans=query(r)-query(l-1);
		cout<<ans<<" ";
	}
	cout << endl;
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