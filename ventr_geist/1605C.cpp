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
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'a' && s[i] == s[i + 1]) {
			cout << 2 << endl;
			return;
		}
	}
	for (int i = 0; i < n - 2; i++) {
		if (s[i] == 'a' && s[i + 2] == 'a') {
			cout << 3 << endl;
			return;
		}
	}

	string s1 = "abca";
	string s2 = "acba";
	string s3 = "abbacca";
	string s4 = "accabba";
	if (s.find(s1) != string::npos || s.find(s2)!=string::npos) {
		cout << 4 << endl;
		return;
	}
	if (s.find(s3) != string::npos || s.find(s4) != string::npos) {
		cout << 7 << endl;
		return;
	}

	cout << -1 << endl;
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