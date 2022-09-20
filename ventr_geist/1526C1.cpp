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
const int N = 2000 + 10;
int arr[N];
int pref[N];
void solve() {
	int n;
	cin >> n;
	int x;
	priority_queue<int, vector<int>, greater<int>> q;
	int ans = 0;
	ll s = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		q.push(x);
		s += x;
		ans++;
		if (s < 0) {
			s -= q.top();
			q.pop();
			ans--;
		}
	}
	cout << ans << endl;

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