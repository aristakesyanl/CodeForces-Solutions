//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//#include <set>
//#include <unordered_set>
//#include <queue>
//#include <deque>
//#include <string>
//#include <sstream>
//#include <iomanip>
//#include <map>
//#include <unordered_map>
//#include <stack>
//#include <cstdio>
//#include <climits>
//#include <tuple>
//#include <ctime>
//#include <cstring>
//#include <numeric>
//#include <functional>
//#include <chrono>
//#include <cassert>
//#include <bitset>
//using namespace std;
//typedef long long ll;
//const int INF = 2e9 + 100;
//const int mod = 1e9 + 7;
//const int N = 2e5 + 10;
////char ch[26][2];
////int cnt[26];
//void solve() {
//	string s;
//	cin >> s;
//	bool present[26] = {false};
//	bool ch[26][26] = { false };
//	int cnt[26];
//	/*for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < 2; j++) {
//			 ch[i][j] = '?';
//		}
//		
//	}
//
//	for (int i = 0; i < 26; i++)
//	{
//		cnt[i] = 0;
//	}*/
//	//count how many different neighbors has the same letter
//	int n = s.size();
//	if (n >= 3) {
//		for (int i = 1; i < n - 1; i++)
//		{
//			ch[s[i] - 'a'][s[i - 1] - 'a'] = true;
//			ch[s[i] - 'a'][s[i + 1] - 'a'] = true;
//		}
//
//	}
//	ch[s[0] - 'a'][s[1] - 'a'] = true;
//	if (n >= 2) {
//	   ch[s[n - 1] - 'a'][s[n - 2] - 'a'] = true;
//	}
//
//
//	int count;
//	for (int i = 0; i < 26; i++)
//	{
//		count = 0;
//		for (int j = 0; j < 26; ++j) {
//			if (ch[i][j] == true) {
//				count++;
//			}
//		}
//		cnt[i] = count;
//
//	}
//
//	/*for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < 26; j++) {
//			cout << ch[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (cnt[i] > 2) {
//			cout << "NO" << endl;
//			return;
//		}
//	}
//
//
//	for (int i = 1; i < n; i++)
//	{
//		if (ch[s[i - 1]][s[i]] == true)continue;
//		else {
//			cout << "NO" << endl;
//			return;
//		}
//	}
//
//	for (int i = 0; i < ; i++)
//	{
//
//	}
//
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	int t;
//	cin >> t;
//	while (t--) {
//		solve();
//	}
//	return 0;
//}


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
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];
ll dp[2][N];
int a[2][N];
void dfs(int v) {
	dp[0][v] = dp[1][v] = 0;
	visited[v] = true;
	for (auto u : adj[v]) { 
		if (!visited[u]) {
			dfs(u);
			dp[0][v] += max(dp[0][u] + abs(a[0][u] - a[0][v]), dp[1][u] + abs(a[0][v] - a[1][u]));
			dp[1][v] += max(dp[0][u] + abs(a[0][u] - a[1][v]), dp[1][u] + abs(a[1][v] - a[1][u]));
		}
	}
}
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[0][i] >> a[1][i];
		adj[i].clear();
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j <= n; ++j) {
			dp[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++)
	{
		visited[i] = false;
	}

	int u, v;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);
	/*for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j <= n; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << max(dp[0][1], dp[1][1]) << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}