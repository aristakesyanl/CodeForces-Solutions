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
	int even = 0;
	int odd;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			even++;
		}
	}
	
	odd = n - even;
	int pe = 1;
	int po = 2;
	int se = 0;
	int so = 0;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] % 2 == 0) {
			se += abs(pe - i);
			pe += 2;
			so += abs(po - i);
			po += 2;
		}
	}

	/*cout << "so: " << so << endl;
	cout << "se: " << se << endl;*/

	if (even == odd) {
		cout << min(so, se) << endl;
		return;
	}
	if (even == odd + 1) {
		cout << se << endl;
		return;
	}
	if (abs(even - odd) > 1) {
		cout << -1 << endl;
		return;
	}

	cout << so << endl;

	//odd = n - even;
	//if (odd > even) {
	//	//move odd numbers
	//	cout << "case 1" << endl;
	//	int k = 0;
	//	ll swaps = 0;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		if (arr[i] % 2 == 1) {
	//			cout << "for " << arr[i] << " : " << abs(i - 2 * k + 1) << " swaps" << endl;
	//			swaps += abs(i - 2 * k + 1);
	//			k++;
	//		}
	//	}
	//	cout << swaps << endl;
	//	return;
	//}

	//if (odd == even) {
	//	if (arr[1] % 2 == 0) {
	//		//move even numbers
	//		cout << "case 2/even" << endl;
	//		int k = 1;
	//		ll swaps = 0;
	//		for (int i = 1; i <= n; i++)
	//		{
	//			if (arr[i] % 2 == 0) {
	//				cout << "for " << arr[i] << " : " << abs(i - 2 * k) << " swaps" << endl;
	//				swaps += abs(i - 2 * k);
	//				k++;
	//			}
	//			cout << swaps << endl;
	//			return;

	//		}
	//	}
	//	cout << "case 2/odd" << endl;
	//	//move odd numbers
	//	int k = 0;
	//	ll swaps = 0;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		if (arr[i] % 2 == 1) {
	//			cout << "for " << arr[i] << " : " << abs(i - 2 * k + 1) << " swaps" << endl;
	//			swaps += abs(i - 2 * k + 1);
	//			k++;
	//		}
	//		cout << swaps << endl;
	//		return;

	//	}

	//}

	//if (odd < even) {
	//	//move even numbers
	//	cout << "case 3" << endl;
	//	int k = 1;
	//	ll swaps = 0;
	//	for (int i = 1; i <= n; i++)
	//	{
	//		if (arr[i] % 2 == 0) {
	//			cout << "for " << arr[i] << " : " << abs(i - 2 * k) << " swaps" << endl;
	//			swaps += abs(i - 2 * k);
	//			k++;
	//		}
	//		cout << swaps << endl;
	//		return;

	//	}
	//}


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