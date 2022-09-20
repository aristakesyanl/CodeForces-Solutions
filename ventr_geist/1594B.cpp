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
const int N = 32;
const int lim = 1e9;
int arr[N];
ll b[N + 3];
void build() {
	arr[0] = 1;
	for (int i = 1; i < N; i++)
	{
		arr[i] = arr[i - 1] * 2;
	}
}
void solve() {
	int n, k;
	cin >> n >> k;
	if (n == 2) {
		cout << k << endl;
		return;
	}
	b[0] = 1;
	for (int i = 1; i < N; i++)
	{
		b[i] = (b[i - 1] * (n%mod)) % mod;
	}

	/*for (int i = 0; i < N; i++)
	{
		cout << b[i] << " " << endl;
	}*/
	if (k == 1) {
		cout << b[0] << endl;
		return;
	}
	if (k == 2) {
		cout << b[1] << endl;
		return;
	}

	/*int index;
	for (int i = 0; i < n; i++)
	{
		if (k <= arr[i]) {
			index = i;
			break;
		}

	}
	if (k == arr[index]) {
		cout << b[index] << endl;
		return;
	}*/
	ll s = 0;
	for (int i = 31; i >= 0; i--) {
		int p = k >> i;
		if (p & 1) {
			//cout << b[i] << endl;
			s = (s + b[i]) % mod;
		}
	}
	cout << s << endl;
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