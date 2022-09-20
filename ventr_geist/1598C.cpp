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
const int N = 2e5 + 10;
int arr[N];
void solve() {
	int n;
	cin >> n;
	map<int, int> m;
	ll s = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		s += arr[i];
	}
	s <<= 1;
	if (s % n != 0) {
		cout << 0 << endl;
		return;
	}

	s /= n;

	ll ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += m[s - arr[i]];
		m[arr[i]]++;
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
	return 0;
}