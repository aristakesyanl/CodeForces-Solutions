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
const int N = 200000 + 10;
ll b[12];
void solve() {
	int l, r;
	cin >> l >> r;
	ll ans = r-l;
	b[0] = 9;
	for (int i = 1; i < 10; i++) {
		b[i] = b[i - 1] * 10 + 9;
	}

	int p, q, k;
	int cnt;

	for (int i = 0; i < 10; i++) {
		if (b[i] >= r) continue;
		k = (r - 1) % (b[i]+1);
		if (k == b[i]) p = r - 1;
		else p = r - k - 2;
		//cout << "k=" << k << endl;
		if (p < l) continue;
		//cout << "k=" << k << " p=" << p << endl;
		k = l % (b[i]+1);
		int q = l + b[i] - k;
		if (q > r - 1) continue;
		//cout << "k=" << k << " q=" << q << endl;
		int cnt = (p - q) / (b[i] + 1) + 1;
		//cout << "cnt=" << cnt << endl;
		ans += cnt;
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