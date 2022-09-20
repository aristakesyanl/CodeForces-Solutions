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
ll dp[3][N];
void solve() {
	string s;
	cin >> s;
	int len = s.size();
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < len; j++) {
			dp[i][j] = 0;
		}
	}
	dp[2][0] = 1;
	if (s[0] == '?') {
		dp[0][0] = 1;
		dp[1][0] = 1;
	}
	
	for (int i = 1; i < len; i++) {
		if (s[i] != '?' && s[i - 1] != '?' && s[i]!=s[i-1]) {
			dp[2][i] = dp[2][i - 1] + 1;
		}

		else if (s[i] != '?' && s[i - 1] != '?' && s[i]==s[i-1]) {
			dp[2][i] = 1;
		}
		else if (s[i] == '?' && s[i - 1] == '0') {
			dp[2][i] = dp[2][i - 1] + 1;
			dp[0][i] = 1;
			dp[1][i] = dp[2][i - 1] + 1;
		}
		else if (s[i] == '?' && s[i - 1] == '1') {
			dp[2][i] = dp[2][i - 1] + 1;
			dp[0][i] = dp[2][i - 1] + 1;
			dp[1][i] = 1;
		}
		else if (s[i] == '?' && s[i - 1] == '?') {
			dp[2][i] = dp[2][i - 1] + 1;
			dp[0][i] = dp[1][i - 1] + 1;
			dp[1][i] = dp[0][i - 1] + 1;
		}
		/*else if (s[i] == '?') {
			dp[2][i] = dp[2][i - 1] + 1;
			dp[0][i] = 1;
			dp[1][i] = 1;
		}*/
		else if (s[i] == '0' && s[i - 1] == '?') {
			dp[2][i] = dp[1][i - 1] + 1;
		}
		else if (s[i] == '1' && s[i - 1] == '?') {
			dp[2][i] = dp[0][i - 1] + 1;
		}
		
	}

	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < len; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/

	ll ans = 0;
	for (int i = 0; i < len; i++) {
		ans += dp[2][i];
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