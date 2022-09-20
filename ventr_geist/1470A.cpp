#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
int k[300000+10];
int c[300000+10];
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
void solve()
{
	int n, m;
	ll ans=0;
	cin>>n>>m;
	for (int i = 1; i <= n; i++)
	{
	  cin>>k[i];
	}
	sort(k+1,k+n+1);
	for (int i = 1; i <= m; i++)
	{
		cin>>c[i];
	}
	// for (int i = 1; i <=n; i++)
	// {
	// 	cout<<k[i]<<" ";
	// }
	// cout<<endl;
	int p=min(n,m);
	int ptr=1;
	for (int i = n; i >= n-p+1; i--)
	{
		if(c[ptr]<=c[k[i]])
		{
			ans+=c[ptr];
			ptr++;
			//cout<<ans<<endl;
		}
		else
		{
			ans+=c[k[i]];
			//cout<<ans<<endl;
		}
	}
	for (int i = n-p; i >= 0; i--)
	{
		ans+=c[k[i]];
	}
	
	cout<<ans<<endl;
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