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
//implementation of DSU
int parent[2][N];
int s[2][N];
//find the representitve of the set(what set the element belongs)
//if f=0 check for the first forest
//if f=1 check for the second forest
int find(int f, int v) {
	if (v == parent[f][v]) return v;
	return find(f, parent[f][v]);
}

//check if the elements belong to the same element
bool same(int f, int v1, int v2) {
	if (find(f, v1) == find(f, v2))return true;
	return false;
}

//unite to sets
void unite(int f, int v1, int v2) {
	if (find(f, v1) == find(f, v2)) return;
	else {
		v1 = find(f, v1);
		v2 = find(f, v2);
		if (s[f][v1] < s[f][v2])swap(v1, v2);
		s[f][v1] += s[f][v2];
		parent[f][v2] = v1;
	}
}

void solve() {
	int n;
	cin >> n;
	//make DSU
	//each elements is a set
	//the representitives of the sets
	for (int i = 1; i <= n; i++)
	{
		parent[0][i] = parent[1][i] = i;
		s[0][i] = s[1][i] = 1;
	}
	int m1, m2;
	cin >> m1 >> m2;
	int u, v;
	for (int i = 0; i < m1; i++)
	{
		cin >> u >> v;
		unite(0, u, v);
	}

	for (int i = 0; i < m2; i++)
	{
		cin >> u >> v;
		unite(1, u, v);
	}

	vector<pair<int,int>> vect;
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (find(0, i) != find(0, j) && find(1, i) != find(1, j)) {
				vect.push_back(make_pair(i, j));
				unite(0, i, j);
				unite(1, i, j);
			}
		}
	}

	cout << vect.size() << endl;
	for (auto p : vect) {
		cout << p.first << " " << p.second << endl;
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