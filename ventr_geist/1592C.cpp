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
const int N = 1e5 + 10;
vector<int> adj[N];
int arr[N];
int s[N];
int x;
int cnt = 0;
int dfs(int v, int p = -1) {
	s[v] = arr[v];
	for (auto u : adj[v]) {
		if (u != p) {
			s[v] ^= dfs(u, v);
		}
	}
	if (s[v] == x) {
		cnt++;
		return 0;
	}
	return s[v];
}

//int dfs(int v, int p = -1) {
//	s[v] = arr[v];
//	for (auto u : adj[v]) {
//		if (u != p) {
//			s[v] ^= dfs(u,v);
//		}
//	}
//	return s[v];
//
//}

void solve() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i <= n; i++) adj[i].clear();
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	int u, v;

	for (int i = 0; i < n - 1; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	x = arr[1];
	for (int i = 2; i <= n; i++)
	{
		x ^= arr[i];
	}

	//cout << "x: " << x << endl;

	cnt = 0;

	if (x == 0) {
		//cout << "case 1" << endl;
		cout << "YES" << endl;
		return;
	}
	if (k == 2) {
		//cout << "case 2" << endl;
		cout << "NO" << endl;
		return;
	}

	cnt = 0;
	int f = dfs(1, 0);
	/*for (int i = 1; i <= n; i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;*/
	if (!f && cnt > 1) {
		//cout << "case 3" << endl;
		cout << "YES" << endl;
		return;
	}
	//cout << "case 4" << endl;
	cout << "NO" << endl;
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