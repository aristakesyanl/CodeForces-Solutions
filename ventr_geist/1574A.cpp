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
	int n;
	cin >> n;
	for (int i = n; i >= 1 ; i--){
		for (int j = 0; j < i; j++) {
			cout << '(';
		}
		for (int j = 0; j < i; j++) {
			cout << ')';
		}
		for (int j = 0; j < n-i; j++) {
			cout << '(';
		}
		for (int j = 0; j < n-i; j++) {
			cout << ')';
		}
		cout << endl;
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