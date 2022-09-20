#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
string s;
map<long int, int> m;
void solve()
{
	int n;
	cin >> n;
	cin >> s;
	int sum = 0;
	long long int ans=0;
	m.clear();
	m[sum]++;
	for (int i = 0; i < n; i++)
	{
		sum += s[i] - '0';
		ans+=m[sum-i-1];
		m[sum - i - 1]++;
	}
	// long long int ans=0;
	// for (auto i = m.cbegin(); i != m.end(); i++)
	// {
	 	//ans += i->second * (i->second - 1) / 2;
	// 	cout<<i->second<<" ";
	// }
	cout << ans << endl;
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