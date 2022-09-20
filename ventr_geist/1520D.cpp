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
typedef pair<int, int> pa;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 4e5+100;
void solve() {
	ll n;
	cin >> n;
	map<ll, ll> m;
	for (ll i = 0; i < n; i++)
	{
		ll k;
		cin >> k;
		m[k - i]++;
	}

	ll ans = 0;

	for (auto u : m) {
		if (u.second == 0) continue;
		ans += (u.second * (u.second - 1)) / 2;
	}

	cout << ans << endl;

}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	//solve();
	return 0;
}