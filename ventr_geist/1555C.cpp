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
const int M = 100000 + 10;
int arr[2][M];
int sum[2];
void solve() {
	int m;
	cin >> m;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> arr[i][j];
			sum[i] += arr[i][j];
		}
	}

	int bobmx = INT32_MAX;
	int cur1 = 0;
	int cur2 = 0;

	for (int i = 1; i <= m; i++)
	{
		cur1 += arr[0][i];
		cur2 += arr[1][i - 1];
		//cout << sum[0] - cur1 << " " << cur2 << endl;
		bobmx =min(max(sum[0] - cur1, cur2),bobmx);
	}
	cout << bobmx << endl;
	sum[0] = 0;
	sum[1] = 0;
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