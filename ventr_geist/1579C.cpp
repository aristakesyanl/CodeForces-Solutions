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
const int N = 25;
char arr[N][N];
bool b[N][N];
void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			b[i][j] = false;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == '*') {
				bool flag = true;
				int p;
				for (p = 1; p <= k; p++) {
					if (arr[i - p][j - p] != '*' || arr[i - p][j + p] != '*') {
						flag = false;
					}
				}

				if (flag) {
					for (p = 0;; p++) {
						if (i - p < 0 || j - p < 0 || j + p >= m || arr[i - p][j - p] != '*' || arr[i - p][j + p] != '*') {
							break;
						}
						b[i - p][j - p] = true;
						b[i - p][j + p] = true;
					}
				}
			}
			
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == '*' && b[i][j] == false) {
				cout << "NO" << endl;
				return;
			}
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