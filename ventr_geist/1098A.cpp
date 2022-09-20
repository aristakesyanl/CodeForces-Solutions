#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <stack>
#include <cstdio>
#include <climits>
#include <tuple>
#include <ctime>
#include <cstring>
#include <numeric>
#include <functional>
#include <chrono>
#include <cassert>
#include <bitset>
using namespace std;
typedef long long ll;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
ll s[N];
ll p[N];
ll a[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		cin >> p[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}

	for (int i = 1; i <= n; i++)
	{
		if (s[i] == -1) {
			s[i] = inf;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		s[p[i]] = min(s[p[i]], s[i]);
	}

	ll ans = s[1];

	for (int i = 2; i <= n; i++)
	{
		if (s[p[i]] > s[i]) {
			cout << -1 << endl;
			return;
		}
		else {
			if (s[i] == inf) continue;
			else {
				ans += s[i] - s[p[i]];
			}
		}
	}
	cout << ans << endl;

}
int main() {
	ios_base::sync_with_stdio(false);
	/*int t;
	cin >> t;
	while (t--) {
		solve();
	}*/
	solve();
	return 0;
}