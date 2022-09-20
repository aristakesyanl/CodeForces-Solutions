#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
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
	int zer=0, one=0;
	for (int i = 0; i < k; i++)
	{
		int tmp = -1;
		for (int j = i; j < n; j += k)
		{
			if(s[j]!='?')
			{
				if (tmp != -1 && s[j] - '0' != tmp)
				{
					cout << "NO" << endl;
					return;
				}
				tmp=s[j]-'0';
			}
		}
		if(tmp!=-1)
		{
          if(tmp==0) zer++;
		  else one++;
		}
	}
	if(max(zer,one)>k/2)
	{
		cout<<"NO"<<endl;
		return;
	}
	cout<<"YES"<<endl;
	return;
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