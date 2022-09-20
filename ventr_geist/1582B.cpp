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
const int N = 60 + 10;
int arr[N];
void solve() {
	int n;
	cin >> n;
	int cnt_0 = 0;
	int cnt_1 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 0) cnt_0++;
		if (arr[i] == 1) cnt_1++;
			 
	}
	ll count = 1ll << cnt_0;
	count *= cnt_1;
	cout << count << endl;
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