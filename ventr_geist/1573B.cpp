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
const ll N = 100000 + 10;
const int logN = 31;
pair<int, int> a[N];
int b[N];
int mn[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].first;
		a[i].second = i;
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + n);

	mn[0] = a[0].second;
	for (int i = 1; i < n; i++) {
		mn[i] = min(mn[i - 1], a[i].second);
	}

	/*for (int i = 0; i < n; i++) {
		cout << mn[i] << " ";
	}
	cout << endl;*/

	int ans = inf;
	for (int i = 0; i < n; i++) {
		//cout << i<<" "<< mn[b[i] - 1] << endl;
		ans = min(ans, i + mn[(b[i] - 1)/2]);
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