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
const int N = 1e4 + 100;
int arr[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	if (arr[n] == 0) {
		for (int i = 1; i <= n+1; i++)
		{
			cout << i << " ";
		}
		cout << endl;
		return;
	}
	if (arr[1] == 1) {
		cout << n + 1 << " ";
		for (int i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
		cout << endl;
		return;
	}

	for (int i = 1; i < n; i++)
	{
		if (arr[i] == 0 && arr[i + 1] == 1) {
			for (int j = 1; j <= i; j++)
			{
				cout << j << " ";
			}
			cout << n + 1 << " ";
			for (int j = i+1; j <= n; j++)
			{
				cout << j << " ";
			}
			return;
		}
	}

	cout << -1 << endl;
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