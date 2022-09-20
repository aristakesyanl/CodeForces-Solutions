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
const int N = 40 + 10;
int arr[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	bool flag = true;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << -1 << endl;
		return;
	}
	sort(arr, arr + n);
	int k = arr[1] - arr[0];
	for (int i = 2; i < n; i++)
	{
		int s = arr[i] - arr[i - 1];
		k = gcd(k, s);
	}
	cout << k << endl;
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