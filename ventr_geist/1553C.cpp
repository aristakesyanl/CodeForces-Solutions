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
const int N = 300 + 10;
int c[2][10];
void solve() {
	string s;
	cin >> s;
	//first wins
	int n = 10;
	int cnt1 = 0;
	int cnt2 = 0;
	int ans = 9;
	for (int i = 0; i < n; i++)
	{
		if (i %2 == 0) {
			if (s[i] == '1' || s[i] == '?') cnt1++;
		}
		else {
			if (s[i] == '1') cnt2++;
		}
		if (cnt1 > cnt2 + (10 - i) / 2) ans = min(ans, i);
		if (cnt2 > cnt1 + (9 - i) / 2) ans = min(ans, i);
		
	}

	//second wins
	cnt1 = cnt2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) {
			if (s[i] == '1') cnt1++;
		}
		else {
			if (s[i] == '1' || s[i]=='?') cnt2++;
		}
		if (cnt1 > cnt2 + (10 - i) / 2) ans = min(ans, i);
		if (cnt2 > cnt1 + (9 - i) / 2) ans = min(ans, i);
	
	}
	cout << ans + 1 << endl;
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}