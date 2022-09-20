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
const int N = 63;
ll arr[N];
void build() {
	arr[0] = 1;
	for (ll i = 1; i < N; i++)
	{
		arr[i] = arr[i - 1] * 2;
	}
}
void solve() {
	ll n, r, l;
	cin >> n;
	if (n % 2 == 1) {
		ll k = n / 2;
		l = k;
		r = k + 1;
	}
	else {
		ll cnt = 0;
		for (int i = 1; i < N; i++)
		{
			if (n % arr[i] != 0) {
				cnt = i;
				break;
			}
		}
		ll p = n / arr[cnt - 1];
		//cout << "p: " << p << endl;
		//cout << "biggest degree of two: " << arr[cnt] << endl;
		l = (p + 1 - arr[cnt]) / 2;
		r = l + arr[cnt] - 1;
	}
	cout << l << " " << r << endl;
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	build();
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	//solve();
	return 0;
}