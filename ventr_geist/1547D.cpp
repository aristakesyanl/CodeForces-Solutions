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
const int N = 2e5 + 10;
int x[N];
int y[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	y[0] = 0;
	int t;
	for (int i = 1; i < n; i++)
	{
		t = x[i - 1] ^ y[i-1];
		y[i] = (t | x[i]) ^ x[i];
	}
	for (int i = 0; i < n; i++) {
		cout << y[i] << " ";
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