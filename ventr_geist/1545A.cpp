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
int cnt[2][N];
int arr[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= N; j++) {
			cnt[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		if (i & 1) {
			cnt[0][arr[i]]++;
		}
	}
	sort(arr + 1, arr + n + 1);
	for (int i = 1; i <= n; i++) {
		if (i & 1) {
			cnt[1][arr[i]]++;
		}
	}

	for (int i = 1; i <= n; i++) {
		if (cnt[0][arr[i]] != cnt[1][arr[i]]) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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