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
const int N = 400000 + 10;
vector<int> adj[N];
int nb[N];
int del[N];
void solve() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		nb[i] = 0;
		del[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		adj[i].clear();
	}
	int u, v;
	for (int i = 0; i < n - 1; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
		nb[u]++;
		nb[v]++;
	}
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		if (nb[i] == 1) {
			del[i] = 1;
			q.push(i);
		}
	}

	while (!q.empty()) {
		int y = q.front();
		q.pop();
		for (int x : adj[y]) {
			if (nb[x] == 1) continue;
			else {
				nb[x]--;
				if (nb[x] == 1) {
					q.push(x);
					del[x] = del[y] + 1;
				}
			}
		}
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (del[i] > k) ans++;
	}
	cout << ans << endl;

}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t=1;
	cin >> t;
	while (t--) {
		solve();
	}
	//solve();
	return 0;
}