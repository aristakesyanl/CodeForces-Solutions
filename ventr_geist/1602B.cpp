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
const int N = 2000 + 10;
const int logN = 12;
int arr[logN][N];
int cnt[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cnt[i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[0][i];
		cnt[arr[0][i]]++;
	}

	/*for (int i = 1; i <= n; i++)
	{
		cout << cnt[i] << " ";
	}
	cout << endl;*/

	for (int i = 1; i < logN; i++)
	{
		for (int j = 1; j <= n; j++) {
			arr[i][j] = cnt[arr[i-1][j]];
		}

		for (int j = 1; j <= n; j++) {
			cnt[j] = 0;
		}

		for (int j = 1; j <= n; j++) {
			cnt[arr[i][j]]++;
		}
	}
	/*cout << endl;

	for (int i = 0; i < logN ; i++)
	{
		for (int j = 1; j <=n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		if (b + 1 > logN)
			cout << arr[logN-1][a] << endl;
		else
			cout << arr[b][a] << endl;
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