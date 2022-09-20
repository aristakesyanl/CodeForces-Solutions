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
const int N = 4e5+100;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	int dif = inf;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int index;

	for (int i = 1; i < n; i++)
	{
		if (v[i] - v[i - 1] < dif) {
			dif = v[i] - v[i - 1];
			index = i;
		}
	}
	if (n == 2) {
		cout << v[index - 1] << " " << v[index] << endl;
		return;
	}
	else {
		for (int i = index; i < n; i++)
		{
			cout << v[i] << " ";
		}
		for (int i = 0; i < index; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
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