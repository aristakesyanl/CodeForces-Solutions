#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
struct seg
{
	int l, r;
	bool operator<(const seg &other) const
	{
		int len = r - l + 1;
		int leno = other.r - other.l + 1;
		if (len == leno)
			return l > other.l;
		else
			return len < leno;
	}
};
void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	priority_queue<seg> pq;
	pq.push({0, n - 1});
	int i = 0;
	while (!pq.empty())
	{
		auto x = pq.top();
		pq.pop();
		int mid = (x.r + x.l) / 2;
		a[mid] = ++i;
		if (x.l < mid)
			pq.push({x.l, mid - 1});
		if (mid < x.r)
			pq.push({mid + 1, x.r});
	}
	for (auto x : a)
	{
		cout << x << " ";
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