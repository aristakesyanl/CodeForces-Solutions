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
const int N = 1000 + 10;
int arr[N][N];

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	int x, y;
	for (int i = 0; i < k; i++) {
		x = 1;
		cin >> y;
		while (x <= n) {
			int f = arr[x][y]; arr[x][y] = 2;
			if (f == 1) y++;
			if (f == 2)x++;
			if (f == 3)y--;
		}
		cout << y << " ";
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