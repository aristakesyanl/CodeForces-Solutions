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
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
void solve() {
	int n;
	char c;
	cin >> n >> c;
	string s;
	cin >> s;
	bool flag1 = true;
	bool flag2 = true;
	int g;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != c) {
			flag1 = false;
			g = i + 1;
			break;
		}
		if (s[i] == c) {
			flag2 = false;
		}
	}
	if (flag1) {
		cout << 0 << endl;
		return;
	}

	for (int i = n/2; i < n; i++)
	{
		if (s[i] == c) {
			cout << 1 << endl;
			cout << i + 1 << endl;
			return;
		}
	}
	cout << 2 << endl;
	cout << n - 1 << " " << n << endl;
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