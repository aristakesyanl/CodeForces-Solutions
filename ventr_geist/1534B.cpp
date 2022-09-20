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
const int N = 4e5+10;
int arr[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	arr[n + 1] = 0;
	ll ugliness = arr[1] + arr[n];
	for (int i = 2; i <= n; i++)
	{
		ugliness += abs(arr[i] - arr[i - 1]);
	}

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			int mx = max(arr[i - 1], arr[i + 1]);
			ugliness -= (arr[i] - mx);
		}
	}
	cout << ugliness << endl;
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}