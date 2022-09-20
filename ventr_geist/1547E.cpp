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
const int N = 300000 + 10;
int pref[N];
int suf[N];
int arr[N];
int c[N];
void solve() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		c[i] = inf;
	}
	int t;
	for (int i = 1; i <= k; i++) {
		cin >> t;
		c[arr[i]] = t;
	}


	pref[1] = c[1];
	for (int i = 2; i <= n; i++) {
		pref[i] = min(pref[i - 1] + 1, c[i]);
	}

	suf[n] = c[n];
	for (int i = n - 1; i >= 1; i--) {
		suf[i] = min(suf[i + 1] + 1, c[i]);
	}

	for (int i = 1; i <= n; i++) {
		cout << min(pref[i], suf[i]) << " ";
	}
	cout << endl;
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