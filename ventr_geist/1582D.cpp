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
int arr[N];
int b[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if (n % 2 == 0) {
		for (int i = 0; i < n; i+=2)
		{
			b[i] = -arr[i + 1];
			b[i + 1] = arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < n-3; i+=2)
		{
			b[i] = -arr[i + 1];
			b[i + 1] = arr[i];
		}

		if (arr[n - 3] + arr[n - 2] != 0) {
			b[n - 3] = arr[n - 1];
			b[n - 2] = arr[n - 1];
			b[n - 1] = -arr[n - 3] - arr[n - 2];
		}
		else if (arr[n - 1] + arr[n - 2] != 0) {
			b[n - 3] = -arr[n - 2] - arr[n - 1];
			b[n - 2] = arr[n - 3];
			b[n - 1] = arr[n - 3];
		}
		else {
			b[n - 3] = arr[n - 2];
			b[n - 2] = -arr[n - 3] - arr[n - 1];
			b[n - 1] = arr[n - 2];
		}
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
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