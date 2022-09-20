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
const int N = 50000 + 10;
int arr[N][5];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	if (n == 1) {
		cout << 1 << endl;
		return;
	}

	int ans = 1;;
	for (int i = 2; i <= n; i++)
	{
		int cnt = 0;
		for (int j = 1; j <= 5; j++) {
			if (arr[ans][j] < arr[i][j]) {
				cnt++;
			}
		}
		if (cnt < 3) ans = i;
	}

	for (int i = 1; i < ans; i++) {
		int cnt = 0;
		for (int j = 1; j <= 5; j++) {
			if (arr[ans][j] < arr[i][j]) cnt++;
		}
		if (cnt < 3) ans = -1;
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