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
void solve() {
	int arr[10] = { 0,3,13,251,1181,10531,100049,1000291,10000271,100000237 };
	int a, b, c;
	cin >> a >> b >> c;
	ll x, y, g;
	if (c == 1) {
		if (a == b) {
			cout << arr[a] + 1 << " " << arr[b] << endl;
			return;
		}
		cout << arr[a] << " " << arr[b] << endl;
		return;
	}
	else {
		a = a - (c - 1);
		b = b - (c - 1);
		g = 1;
		for (int i = 0; i < c-1; i++)
		{
			g *= 10;
		}
		if (a == b) {
			cout << (arr[a]+1) * g << " " << arr[b] * g << endl;
			return;
		}
		cout << arr[a] * g << " " << arr[b] * g << endl;
		return;
	}
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