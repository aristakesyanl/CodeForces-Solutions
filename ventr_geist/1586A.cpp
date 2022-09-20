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
const int N = 100 + 10;
const int logN = 12;
bool isPrime(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i*i <= n; i++)
	{
		if (n % i == 0)return false;
	}
	return true;

}
int arr[N];
void solve() {
	int n;
	cin >> n;
	int sum = 0;
	int odd = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		if (arr[i] % 2 == 1)odd = i;
	}
	if (!isPrime(sum)) {
		cout << n << endl;
		for (int i = 0; i < n; i++)
		{
			cout << i+1 << " ";
		}
		cout << endl;
		return;
	}
	cout << n - 1 << endl;
	for (int i = 0; i < n; i++)
	{
		if (i != odd) {
			cout << i+1 << " ";
		}
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