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
ll arr[N];

void solve() {
	ll n,k,x;
	cin >> n >> k >> x;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	vector<ll> v;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] - arr[i - 1] > x) {
			//cout << arr[i] << " " << arr[i - 1] << endl;
			v.push_back(arr[i] - arr[i - 1]);
			cnt++;
		}
	}

	sort(v.begin(), v.end());
	for (auto u : v) {
		u -= x;
		if (k >= (u + x - 1) / x) {
			k -= (u + x - 1) / x;
			cnt--;
		}
	}
	cout << cnt + 1 << endl;
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