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
using namespace std;
void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> v(n);
	for (auto& x : v) {
		cin >> x;
	}

	ll count = 0;

	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		count += (upper_bound(v.begin()+i+1, v.end(), r - v[i]) - lower_bound(v.begin()+i+1, v.end(), l - v[i]));
	}
	cout << count << endl;
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