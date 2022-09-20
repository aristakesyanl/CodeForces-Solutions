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
const int logN = 12;
int arr[N];
int b[32];
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < 32; i++)
	{
		b[i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		for (int j = 31; j >= 0; j--)
		{
			int p = arr[i] >> j;
			if (p & 1) b[j]++;
		}
	}

	for (int i = 1; i <=n ; i++)
	{
		bool flag = true;
		for (int j = 0; j < 32; j++) {
			if (b[j] % i != 0) flag = false;
		}
		if (flag) cout << i << " ";

	}
	cout << endl;

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