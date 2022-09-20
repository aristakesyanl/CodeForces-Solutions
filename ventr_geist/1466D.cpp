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
int nb[N];
int w[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		nb[i] = 0;
	}
 
	ll sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> w[i];
		sum += w[i];
	}
	//cout << sum << " ";
 
	int u, v;
	for (int i = 0; i < n - 1; i++) {
		cin >> u >> v;
		nb[u]++;
		nb[v]++;
	}
	/*for (int i = 1; i <= n; i++) {
		cout << nb[i] << " ";
	}
	cout << endl;*/
	priority_queue<pair<int, int>> q;
	for (int i = 1; i <= n; i++) {
		if (nb[i] > 1) {
			q.push(make_pair(w[i],nb[i]));
		}
	}
	/*while (!q.empty()) {
		int f = q.top().first;
		int x = q.top().second;
		cout << f << " " << x << endl;
		q.pop();
	}*/
	cout << sum << " ";
	int k = 1;
	while (k < n - 1) {
			sum += q.top().first;
			int h = q.top().first;
			int g = q.top().second;
			//cout << "2: " << sum << " " << h << " " << g << endl;
			cout << sum << " ";
			g--;
			q.pop();
			if (g > 1) q.push(make_pair(h, g));
			k++;
	}
	cout << endl;
	
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