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
vector<int> v[N];
int arr[N];
int b[N];
void solve() {
	int n, k;
	cin >> n >> k;
	map<int, int> m;
	vector<pair<int, int>> v;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (m[arr[i]] < k) {
			m[arr[i]]++;
			v.push_back(make_pair(arr[i], i));
			cnt++;

		}
	}
	int rem = cnt % k;
	cnt -= rem;

	//cout << "cnt=" << cnt << endl;

	sort(v.begin(), v.end());

	/*for (auto u : v) {
		cout << u.first << " " << u.second << endl;
	}*/

	for (int i = 0; i < n; i++) {
		b[i] = 0;
	}

	for (int i = 0; i < cnt; i++) {
		b[v[i].second] = i % k + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;
	
	//cout << "rem=" << rem << endl;
	

	/*for (auto& u : m) {
		cout << u.second << " ";
	}
	cout << endl;*/
		

	//priority_queue<pair<int,int>> q;
	//for (auto u : m) {
	//	q.push(make_pair(u.second, u.first));
	//}
	//map<int, int> m1;
	//int ptr = 1;
	//int ptr1;
	//while (!q.empty()) {
	//	int f = q.top().first;
	//	int d = q.top().second;
	//	q.pop();
	//	if (ptr + f > k) {
	//		//cout << "case 1" << endl;
	//		//cout << "ptr=" << ptr << endl;
	//		m1.emplace(d,ptr);
	//		ptr1 = ptr;
	//		ptr += f;
	//		if (ptr > k) {
	//			ptr -= k;
	//		}
	//	}
	//	else {
	//		//cout << "case 2" << endl;
	//		//cout << "ptr=" << ptr << endl;
	//		m1.emplace(d, ptr);
	//		ptr1 = ptr;
	//		ptr += f;
	//	}
	//	//cout << d << " " << f << " " << ptr1 << endl;
	//}

	/*for (int i = 1; i <= n; i++) {
		b[i] = 0;
	}
	for (auto u : m1) {
		cout << u.first << " " << u.second << endl;
	}

	for (int i = 1; i <= n; i++) {
		if (m[arr[i]] == 0) b[i] = 0;
		else {
			b[i] = m1[arr[i]];
			m1[arr[i]]++;
			if (m1[arr[i]] > k) m1[arr[i]] = 1;
			m[arr[i]]--;
		}
	}

	for (int i = 1; i <= n; i++) {
		cout << b[i] << " ";
	}
	cout << endl;*/
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