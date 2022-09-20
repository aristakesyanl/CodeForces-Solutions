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
	if (n == 1) {
		cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
		return;
	}
	for (int i = n/2; i < n; i++)
	{
		if (s[i] == '0') {
			//cout << "case 1" << endl;
			cout << 1 << " " << i + 1 << " " << 1 << " " << i << endl;
			return;
		}
	}

	int index;
	bool flag = true;
	for (int i = n/2-1; i >= 0; i--)
	{
		if (s[i] == '0') {
			index = i;
			flag = false;
			break;
		}
	}

	if (flag) {
		//cout << "case 2" << endl;
		cout << 1 << " " << n - 1 << " " << 2 << " " << n << endl;
		return;
	}

	//cout << "case 3" << endl;
	cout << index + 1 << " " << n << " " << index + 2 << " " << n << endl;
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