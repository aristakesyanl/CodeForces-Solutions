#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
ll arr[40000 + 10];
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
void solve()
{
	string s;
	cin>>s;
	int t=s.size();
	bool flag=true;
	for (int i = 0; i < t-1; i++)
	{
		if(s[i]!=s[i+1]) flag=false;
	}
	if(flag)
	{
		cout<<s<<endl;
		return;
	}
	for (int i = 0; i < t; i++)
	{
		cout<<"10";
	}
	cout<<endl;
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