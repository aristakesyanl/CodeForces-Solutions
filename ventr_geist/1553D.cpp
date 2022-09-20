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
int b[2][N];
void solve() {
	string s, t;
	cin >> s >> t;
	int n = s.size();
	int m = t.size();
	if (m > n) {
		cout << "NO" << endl;
		return;
	}
	int j = n - 1;
	int i = m - 1;
	while (j>=0 && i>=0) {
		if (s[j] == t[i]) {
			i--;
			j--;
		}
		else {
			if (j >= 2) {
				j -= 2;
			}
			else {
				cout << "NO" << endl;
				return;
			}
		}
	}
	/*for (int i = m - 1; i >= 0; i--) {
		if (s[j] == t[i]) continue;
		else {
			if (j >= 2) j -= 2;
			else {
				cout << "NO" << endl;
				return;
			}
		}
	}*/

	if (i < 0) {
		cout << "YES" << endl;
		return;
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