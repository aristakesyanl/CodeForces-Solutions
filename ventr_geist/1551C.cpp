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
vector<int> v[5];
int arr[5];
void solve() {
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		int size = s.size();
		for (int j = 0; j < 5; j++) {
			arr[j] = 0;
		}
		for (int j = 0; j < size; j++) {
			arr[s[j] - 'a']++;
		}
		for (int j = 0; j < 5; j++) {
			v[j].push_back(2*arr[j]-size);
		}
	}

	for (int i = 0; i < 5; i++) {
		sort(v[i].rbegin(), v[i].rend());
	}
	/*for (int i = 0; i < 5; i++) {
		for (auto x : v[i]) {
			cout << x << " ";
		}
		cout << endl;
	}*/
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		int cnt = 0;
		int sum = 0;
		for (int x : v[i]) {
			if (sum + x > 0) {
				sum += x;
				cnt++;
			}	
			else break;
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
	for (int i = 0; i < 5; i++) {
		v[i].clear();
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