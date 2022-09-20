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
const int n = 2e5 + 10;
void solve() {
	string s, s1, s2;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if ((i % 2) == 0) s1 += s[i];
		else s2 += s[i];
	}
	if (s2.empty()) {
		cout << stoi(s1) - 1 << endl;
		return;
	}

	int k, p;;
	cout << (stoi(s1) + 1) * (stoi(s2) + 1) - 2 << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}