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
int cnt = 0;
bool visited[N][N];
int n, m;
//north  east south west
//north-> add{-1,0}  to {i,j}
//east->add{0,1}
//south->add{1,0}
//west->add{0,-1}

//clockwise
int c[4][2] = {{0,-1},{1,0},{0,1},{-1,0} };
void dfs(int i, int j) {
	cnt++;
	visited[i][j] = true;

	for (int k = 0; k < 4; k++) {
		if (((arr[i][j] >> k) & 1) == 0) {
			int xx = i+c[k][0];
			int yy = j+c[k][1];
			if (xx<1 || xx>n || yy<1 || yy>m) continue;
			if(!visited[xx][yy]) dfs(xx, yy);
		}
	}
}
void solve() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			visited[i][j] = false;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!visited[i][j]) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}
	sort(v.rbegin(), v.rend());
	for (auto u : v) {
		cout << u << " ";
	}
	cout << endl;
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