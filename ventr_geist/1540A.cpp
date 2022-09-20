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
const int N = 100000 + 10;
ll d[N];
void solve() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> d[i];
	}
	
	if (n == 1 || n == 2) {
		cout << 0 << endl;
		return;
	}

	sort(d + 1, d + n + 1);

	ll ans = d[n];
	for (int i = 1; i < n; i++) {
		ans -= (d[n] - d[i]);
	}

	for (int i = n - 1; i >= 1; i--) {
		ans -= (1ll * (i - 1) * d[i] - 1ll * (n - i - 1) * d[i]);
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