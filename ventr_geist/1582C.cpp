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
const int N = 60 + 10;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int mn = inf;
	for (int i = 0; i < 26; i++)
	{
		int cnt = 0;
		int l = 0;
		int r = n - 1;
		while (l <= r) {
			if (s[l] == s[r]) {
				l++;
				r--;
			}
			else if (s[l] == char('a'+i) && s[r]!= char('a' + i)) {
				l++;
				cnt++;
			}
			else if (s[l] != char('a' + i) && s[r] == char('a' + i)) {
				r--;
				cnt++;
			}
			else {
				cnt = inf;
				break;
			}
		}
		mn = min(mn, cnt);

	}
	if (mn == inf) {
		cout << -1 << endl;
		return;
	}

	cout << mn << endl;
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