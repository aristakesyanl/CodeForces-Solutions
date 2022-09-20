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
const int N = 90000 + 10;
pair<int, int> p[N];
void solve() {
	int n,m;
	cin >> n>>m;
	for (int i = 1; i <= n*m; i++)
	{
		int a;
		cin >> a;
		p[i] = make_pair(a, i);
	}
	sort(p + 1, p + 1 + n * m);
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		int l = m * (i - 1) + 1;
		int r = m * i;
		for (int j = l; j <= r; j++)
		{
			for (int k = l; k < j ; k++) {
				if (p[k].second < p[j].second && p[j].first!=p[k].first) ans++;
			}
		}
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