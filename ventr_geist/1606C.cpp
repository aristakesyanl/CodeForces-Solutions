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
const int N = 19;
bool b[N];
ll arr[N];
ll prefix[N];
using namespace std;
ll power_10(int k){
	ll ans = 1;
	for (int i = 0; i < k; i++) {
		ans *= 10ll;
	}
	return ans;
}
void solve() {
	ll n, k;
	cin >> n >> k;
	int x;
	
	for (int i = 0; i < N; i++)
	{
		b[i] = false;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		b[x] = true;

	}

	ll cur = k;
	if (k < 9) {
		cout << k + 1 << endl;
		return;
	}
	k -= 9;
	int last = 0;
	int len = 2;
	arr[0] = 1;

	for (int i = 1; i < 19; i++)
	{
		if (b[i]) {
			arr[i] = 1;;
			last=i;

		}
		else {
			if (power_10(i - last) <= 1000000000) {
				arr[i]=power_10(i - last);
			}
			else {
				break;
			}
		}
	}

	int p;
	for (int i = 18; i >= 0; i--)
	{
		if (arr[i] != 0) {
			p = i;
			break;
		}
	}

	for (int i = 1; i <= p; i++)
	{
		if (k >= 9 * arr[i]) {
			len++;
			k -= 9 * arr[i];
		}
		else {
			break;
		}
	}

	prefix[0] = 9;
	for (int i = 1; i < len; i++)
	{
		prefix[i] = prefix[i - 1] + 9 * arr[i];
	}

	//cur->number of banknotes
	//res->biggest number you can get with k banknotes
	ll res = 0;
	for (ll i = 1; i < 10; i++)
	{
		if (i * arr[len - 1] + prefix[len - 2] > cur) {
			res += i * power_10(len - 1);
			cur -= i * arr[len - 1];
			break;
		}
	}

	bool flag = true;
	for (ll i = len-2; i > 0; i--)
	{
		flag = true;
		for (ll j = 0; j < 10; j++) {
			if (j * arr[i] + prefix[i - 1] > cur) {
				res += j * power_10(i);
				cur -= j * arr[i];
				flag = false;
				break;
			}
		}
		if (flag) {
			res += 9 * power_10(i);
			cur -= 9 * arr[i];
		}
	
	}
	flag = true;
	for (int i = 0; i < 10; i++)
	{
		if (i > cur) {
			res += i;
			flag = false;
			break;
		}
	}

	if(flag)res += 9;
	cout << res << endl;
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