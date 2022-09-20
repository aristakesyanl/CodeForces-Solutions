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
const int N = 1e6 + 10;
pair<ll, ll> p[N];
void solve() {
	long long int n, m, k, cnt;
	cin >> n >> m >> k;
	cnt = n * (n - 1) / 2;
	k -= 2;
	//cout << "k=" << k << endl;
	if (k < 0) {
		//cout << "case 1" << endl;
		cout << "NO" << endl;
		return;
	}
	if (m < n - 1) {
		//cout << "case 2" << endl;
		cout << "NO" << endl;
		return;

	}
	if (m > cnt) {
		//cout << "case 3" << endl;
		cout << "NO" << endl;
		return;

	}

	if (n == 1) {
		//cout << "case 5" << endl;
		if (k < 0) {
			cout << "NO" << endl;
			return;
		}
		else {
			cout << "YES" << endl;
			return;
		}
	}
	
	if (m == cnt) {
		//cout << "case 4" << endl;
		if (k < 1) {
			cout << "NO" << endl;
			return;
		}
		else {
			cout << "YES" << endl;
			return;
		}
	
	}
	
	if (m < cnt) {
		//cout << "case 6" << endl;
		if (k < 2) {
			cout << "NO" << endl;
			return;
		}
		else {
			cout << "YES" << endl;
			return;
		}
	}
	//cout << "case 7" << endl;
	cout << "NO" << endl;
	return;
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