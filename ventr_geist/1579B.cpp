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
const int N = 50 + 10;
int arr[N];
int b[N];
void solve() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		b[i] = arr[i];
	}

	sort(b + 1, b + 1 + n);

	int count = 0;

	vector<pair<int, int>> v;

	//3 1 4 1
	//shift right -> 1 3 1 4
	//shift left -> 1 4 1 3

	for (int i = 1; i <= n; i++)
	{
		if (arr[i] == b[i]) continue;
		else {
			int index;
			for (int j = i; j <= n; j++) {
				if (arr[j] == b[i]) {
					count++;
					v.push_back(make_pair(i, j));
					index = j;
					break;
				}
			}
			for (int k = index; k > i; k--) {
				arr[k] = arr[k - 1];
			}
			arr[i] = b[i];

			/*for (int k = 1; k <= n; k++) {
				cout << arr[k] << " ";
			}
			cout << endl;*/
		}
	}

	cout << count << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << " " << v[i].second-v[i].first << endl;
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