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
const int N = 1e5 + 10;
void solve() {
	int a, b, c, m;
	cin >> a >> b >> c >> m;
	if (m > a + b + c - 3) {
		cout << "NO" << endl;
		return;
	}
	int arr[3] = { a,b,c };
	sort(arr, arr + 3);
	if (m < arr[2] - (arr[1] + arr[0] + 1)) {
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
		
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