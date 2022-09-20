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
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const ll N = 1000000000;
const int logN = 31;
ll arr[logN];
void solve() {
	ll n, a, b;
	cin >> n >> a >> b;
	// all numbers  in the set are in the form of a^k + a^qb,
	//where k>=q
	if (n == 1 ||(a==1 && b==1)) {
		cout << "YES" << endl;
		return;
	}
	if (a == 1) {
		if (n % b == 1) {
			cout << "YES" << endl;
			return;
		}
		cout << "NO" << endl;
		return;
	}
	/*while (n % a == 0) {
		n /= a;
	}*/

	ll p = 1;
	while (n - p >= 0) {
		if ((n - p) % b == 0) {
			cout << "YES" << endl;
			return;
		}
		p *= a;
	}
	cout << "NO" << endl;

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