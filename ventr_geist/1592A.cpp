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
const int N = 1e3 + 10;
int arr[N];
void solve() {
	int n, h;
	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + n);
	if (h <= arr[n - 1]) {
		cout << 1 << endl;
		return;
	}
	int s = arr[n - 1] + arr[n - 2];
	if (s >= h) {
		cout << 2 << endl;
		return;
	}
	int ans = 2 * (h / s);
	h -= s * (h / s);
	//cout << "h=" << h << endl;
	if (h <= 0) {
		cout << ans << endl;
		return;
	}
	else {
		if (h <= arr[n - 1]) ans++;
		else ans += 2;
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