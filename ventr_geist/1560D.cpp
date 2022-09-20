//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//#include <set>
//#include <unordered_set>
//#include <queue>
//#include <deque>
//#include <string>
//#include <sstream>
//#include <iomanip>
//#include <map>
//#include <unordered_map>
//#include <stack>
//#include <cstdio>
//#include <climits>
//#include <tuple>
//#include <ctime>
//#include <cstring>
//#include <numeric>
//#include <functional>
//#include <chrono>
//#include <cassert>
//#include <bitset>
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> pa;
//const int inf = 2e9 + 100;
//const int mod = 1e9 + 7;
//const int N = 53;
//ll arr[N];
//void build() {
//	arr[0] = 1;
//	for (int i = 1; i < N; i++)
//	{
//		arr[i] = 2 * arr[i - 1];
//	}
//}
//int main() {
//	build();
//	ll h, p;
//	h = 10;
//	for (p = 1; p <= 1023; p++)
//	{
//		ll ans, count;
//		ll ready = 1;
//		ll performed;
//		ll task = arr[h] - 1;
//		count = 0;
//		while (task > 0) {
//			performed = min(p, ready);
//			task -= performed;
//			ready += 2*performed;
//			count++;
//		}
//
//		ll k;
//		task = arr[h] - 1;
//		if (p == 1) {
//			ans = task;
//		}
//		else {
//			for (ll i = 0; i < ?; i++)
//			{
//				if (p <= arr[i]) {
//					k = i;
//					break;
//				}
//			}
//
//			ll sub = arr[k] - 1;
//			task -= sub;
//			ans = k + (task + p - 1) / p;
//		}
//
//		if (count == ans) {
//			cout << "OK" << endl;
//			cout << ans << " " << count << endl;
//		}
//		else {
//			cout << "the answer should be: " << count << endl;
//			cout << "the answer is: " << ans << endl;
//		}
//
//	}
//	return 0;
//}

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
const int N = 53;
vector <string> ts;
void build() {
	for (ll p = 1; p <= (ll)2e18; p *= 2) {
		ts.push_back(to_string(p));
	}
}
void solve() {
	string s;
	cin >> s;
	int ans = (int)s.size() + 1;
	for (auto u: ts)
	{
		int sp = 0;
		int tp = 0;
		int taken = 0;
		while (sp < s.size() && tp < u.size()) {
			if (s[sp] == u[tp]) {
				taken++;
				tp++;
			}
			sp++;
		}
		int k = (int)s.size() - taken + (int)u.size() - taken;
		ans = min(ans, k);
	}
	cout << ans << endl;
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	build();
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	//solve();
	return 0;
}