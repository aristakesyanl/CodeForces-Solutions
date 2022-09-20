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
void solve() {
	int n;
	cin >> n;
	int cnt = 0;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] <= 0) cnt++;
	}
	sort(arr, arr + n);

	int mn=-1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0) {
			mn = arr[i];
			break;
		}
	}
	if (mn == -1) {
		//cout << "case 1" << endl;
		cout << cnt << endl;
		return;
	}

	for (int i = 1; i < n; i++)
	{
		if (arr[i] <= 0) {
			if (abs(arr[i] - arr[i - 1]) < mn) {
				//cout << "Error: " << arr[i - 1] << " " << arr[i] << endl;
				flag = false;
			}
		}
	}
	if (flag) {
		//cout << "case 2" << endl;
		cout << cnt + 1 << endl;
		return;
	}

	//cout << "case 3" << endl;
	cout << cnt << endl;
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