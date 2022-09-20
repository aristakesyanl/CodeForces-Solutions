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
void solve() {
	int n,a,k;
	vector<pair<int, int>> p;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		int mx = 0;
		for (int j = 0; j < k; j++)
		{
			cin >> a;
			//cout <<a<< "-"<<j<<"=" << a - j << endl;
			if (a-j > mx) {
				mx = a-j;
			}
		}
		//cout << "mx for array " << i << " " << mx << endl;
		p.push_back({ mx,k });
	}

	sort(p.begin(), p.end());
	/*for (auto v: p)
	{
		cout << v.first << " " << v.second <<endl;;
	}
	cout << endl;*/

	int ans = 0;
	int h = 0;
	for (auto v : p) {
		ans = max(ans, v.first - h);
		h += v.second;
	}

	cout << ans+1 << endl;

	
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