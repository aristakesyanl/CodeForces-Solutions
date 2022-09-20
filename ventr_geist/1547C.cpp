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
int a[300 + 10];
int b[300 + 10];
int c[600 + 10];
void solve() {
	int k,n,m;
	cin >> k>>n>>m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	vector<int> v;

	int i = 0;
	int j = 0;


	while (i < n || j < m) {
		if (i<n && a[i] == 0) {
			v.push_back(0);
			i++;
			k++;
		}
		else if (j < m && b[j] == 0) {
			v.push_back(0);
			j++;
			k++;
		}
		else if (i < n && a[i] <= k) {
			v.push_back(a[i]);
			i++;
		}
		else if (j < m && b[j] <= k) {
			v.push_back(b[j]);
			j++;
		}
		else {
			cout << -1 << endl;
			return;
		}
	}

	for (auto a : v) {
		cout << a << " ";
	}
	cout << endl;

	//int i = 0;
	//int j = 0;
	//int p = 0;
	//// start with a
	//int flag = true;
	//while (i<n) {
	//	if (a[i] == 0) {
	//		c[p++] = a[i];
	//		k++;
	//		i++;
	//	}
	//	else if (a[i] != 0 && k<a[i]) {
	//		while (j < m && k<a[i]) {
	//			if (b[j] == 0) {
	//				k++;
	//				c[p++] = b[j];
	//				j++;
	//		
	//			}
	//			else if (b[j] <= k) {
	//				c[p++] = b[j];
	//				j++;
	//			}
	//			else {
	//				flag = false;
	//				i = n;
	//			}
	//		}

	//		
	//	}
	//	else {
	//		c[p++] = a[i];
	//		i++;
	//	}
	//}

	//if (flag) {
	//	for (int i = 0; i < p; i++)
	//	{
	//		cout << c[i] << " ";
	//	}
	//	cout << endl;
	//	return;
	//}

	//if (!flag) {
	//	i = 0;
	//	j = 0;
	//	p = 0;
	//	// start with b
	//	while (j < m) {
	//		if (b[j] == 0) {
	//			c[p++] = b[j];
	//			k++;
	//			j++;
	//		}
	//		else if (b[j] != 0 && k < b[j]) {
	//			while (i < n && k < b[j]) {
	//				if (a[i] == 0) {
	//					k++;
	//					c[p++] = a[i];
	//					i++;

	//				}
	//				else if (a[i] <= k) {
	//					c[p++] = a[i];
	//					i++;
	//				}
	//				else {
	//					cout << -1 << endl;
	//					return;
	//				}
	//			}
	//		}
	//		else {
	//			c[p++] = a[i];
	//			i++;
	//		}
	//	}

	//	for (int i = 0; i < n + m; i++)
	//	{
	//		cout << c[i] << " ";
	//	}
	//	cout << endl;
	//	return;
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