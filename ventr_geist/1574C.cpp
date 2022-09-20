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
const int N = 1e6 + 10;
ll arr[N];
ll binarysearch(ll arr[], ll l, ll r, ll x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
			return binarysearch(arr, l, mid - 1, x);

		return binarysearch(arr, mid + 1, r, x);
	}

	return r;
}
void solve() {
	int n;
	cin >> n;
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + n);

	int m;
	cin >> m;
	ll x, y;
	ll mn = 2e18;
	for (int i = 0; i < m; i++)
	{
		ll mn = 2e18;
		cin >> x >> y;
		ll p = binarysearch(arr, 0, n - 1, x);
		if (p < 0) p=0;
		//cout << "closest not greater number=" << arr[p] << endl;
		if (arr[p] == x) {
			/*cout << "case 1" << endl;
			cout << y << " " << sum - arr[p] << endl;
			cout << "remainder" << y - sum + arr[p] << endl;*/
			mn = max(0ll, y - sum + arr[p]);
			//cout << "mn=" << mn << endl;
		}

		else {

			/*cout << "case 2" << endl;
			cout << x - arr[p] << " " << y - sum + arr[p];*/
			if (x < arr[p]) {
				ll cnt = max(0ll, y - sum + arr[p]);
				mn = cnt;
				//cout << "mn=" << mn << endl;
			}
			else {
				ll cnt = x - arr[p];
				cnt+= max(0ll, y - sum + arr[p]);
				mn = cnt;
			}

			if (p + 1 < n) {
				p++;
				/*cout << "case 3" << endl;
				cout << y << " " << sum - arr[p] << endl;
				cout << "remainder" << y - sum + arr[p] << endl;*/
				ll cnt = 0;
				cnt += max(0ll, y - sum + arr[p]);
				mn = min(mn, cnt);
				//cout << "mn=" << mn << endl;
			}
		}
		cout << mn << endl;

	}
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	/*int t;
	cin >> t;
	while (t--) {
		solve();
	}*/
	solve();
	return 0;
}