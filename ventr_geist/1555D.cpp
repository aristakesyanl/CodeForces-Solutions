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
char s[N];
int pref[6][N];
void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < 6; i++) {
		pref[i][0] = 0;
	}
	char p[] = "abc";
	int k = 0;
	do {
		for (int i = 1; i <= n; i++) {
			pref[k][i] = pref[k][i - 1];
			if (s[i] != p[(i-1) % 3]) {
				pref[k][i]++;
			}
		}
		k++;
	} while (next_permutation(p, p + 3));

	/*for (int i = 0; i < 6; i++) {
		for (int j = 0; j <= n; j++) {
			cout << pref[i][j] << " ";
		}
		cout << endl;
	}*/


	int l, r;
	for (int i = 0; i < m; i++) {
		cin >> l >> r;
		int ans=pref[0][r]-pref[0][l-1];
		for (int j = 1; j < 6; j++) {
			ans = min(pref[j][r] - pref[j][l - 1], ans);
		}
		cout << ans << endl;
	}
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	/*int t;
	cin >> t;
	while (t--) {
		solve();
	}*/
	solve();
	return 0;
}