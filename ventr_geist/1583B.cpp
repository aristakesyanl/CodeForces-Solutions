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
const int N = 100000 + 10;
const int logN = 12;
bool choose[N];
void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		choose[i] = false;
	}

	for (int i = 0; i < m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		choose[b] = true;
	}
	int root=-1;
	for (int i = 1; i <= n; i++) {
		if (choose[i] == false) {
			root = i;
			break;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (i != root) {
			cout <<root<<" "<< i << endl;
		}
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