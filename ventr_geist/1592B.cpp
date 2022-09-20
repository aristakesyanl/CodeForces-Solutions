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
const int N = 1e5 + 10;
int arr[N];
int b[N];
void solve() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		b[i] = arr[i];
	}
	sort(b, b + n);
	int flag = true;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != b[i]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "YES" << endl;
		return;
	}
	if (n - 1 < x) {
		//cout << "case 1" << endl;
		cout << "NO" << endl;
		return;
	}

	if (n - 1 == x) {
		swap(arr[0], arr[n - 1]);
		for (int i = 0; i < n; i++)
		{
			if (arr[i] != b[i]) {
				//cout << "case 2" << endl;
				cout << "NO" << endl;
				return;
			}
		}
		//cout << "case 3" << endl;
		cout << "YES" << endl;
		return;
	}

	if (x == 1) {
		//cout << "case 4" << endl;
		cout << "YES" << endl;
		return;
	}

	//points that don't move
	int cnt = 0;
	if (n < 2 * x + 1) {
		for (int i = n-x; i < x; i++)
		{
			if (arr[i] != b[i]) {
				//cout << "case 5" << endl;
				cout << "NO" << endl;
				return;
			}
		}
		//cout << "case 6" << endl;
		cout << "YES" << endl;
		return;
	}

	//cout << "case 7" << endl;
	cout << "YES" << endl;
	return;


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