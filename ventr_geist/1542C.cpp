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
const int inf = 2e9 + 100;
const ll mod = 1e9 + 7;
//const int N = 2e5 + 10;
ll  arr[100];
bool prime(ll  n) {
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (ll i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
void solve() {

	//arr[i]=lcm(1,2,3,...,i);
	arr[2] = 2;
	ll prev = arr[2];
	for (ll i = 3; i < 42; i++)
	{
		if (prime(i)) {
			arr[i] = prev * i;
			prev = arr[i];
		}
		else if (i == 4 || i == 8 || i == 16 || i==32) {
			arr[i] = prev * 2;
			prev = arr[i];
		}
		else if (i == 9 || i == 27) {
			arr[i] = prev * 3;
			prev = arr[i];
		}
		else if (i == 25) {
			arr[i] = prev * 5;
			prev = arr[i];
		}
		else {
			arr[i] = prev;
		}
	}
	/*for (int i = 2; i < 42; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	ll n, b, q;
	cin >> n;
	ll ans = ((n + 1) / 2) * 2;

	for (ll i = 3; i < 42; i++)
	{
		b = n / arr[i - 1];
		q = n / arr[i];
		//cout << "b=" << b << " q=" << q << endl;
		ans += (b - q) * i;
		//ans %= mod;
	}
	cout << ans%1000000007 << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	//solve();
	return 0;
}