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
	priority_queue<pair<int, int>> q;
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x > 0) {
			q.push(make_pair(x, i));
		}
	}
	/*while (q.size() > 0) {
		cout << q.top().first << " " << q.top().second<< endl;
		q.pop();
	}*/

	vector<pair<int, int>> v;
	while (q.size() > 1) {
		int a1 = q.top().first; 
		int a2 = q.top().second;
		q.pop();
		int b1 = q.top().first;
		int b2 = q.top().second;
		q.pop();
		//int mn = min(a1, b1);
		//cout << "mn=" << mn << endl;
		
		v.push_back(make_pair(a2, b2));
		a1--;
		b1--;
		if (a1) {
			q.push(make_pair(a1, a2));
		}
		if (b1) {
			q.push(make_pair(b1, b2));
		}
	}
	//cout << "OK" << endl;
	cout << v.size() << endl;
	for (auto u: v)
	{
		cout << u.first << " " << u.second << endl;
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