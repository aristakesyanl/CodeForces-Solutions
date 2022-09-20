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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
void solve() {
	int n;
	cin >> n;
	vector<int> arr(n + 1, 0), b(n + 1, 0), l(n + 1, 0);
	vector<bool> visited(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}

	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (!visited[arr[i]]) {
			count++;
			visited[arr[i]] = true;
			b[i] = arr[i];
			//cout << arr[i] << " is not visited" << " " << i << "=" << arr[i] << endl;
		}
	}

	int k = 1;
	for (int i = 1; i <= n; i++)
	{
		if (b[i]==0) {
			while (visited[k]) {
				k++;
			}
			b[i] = k;
			visited[k] = true;
			k++;
		}
	}

	int p = 0;
	int cnt = 0;
	for (int i = 1 ; i <= n; i++)
	{
		if (b[i] == i) {
			l[p++] = b[i];
			cnt++;
		}
	}
	/*for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "The number of matched pairs is: " << cnt << endl;
	for (int i = 0; i < p; i++)
	{
		cout << l[p] << " ";
	}
	cout << endl;*/
	
    if (cnt == 1) {
		int prev;
		for (int i = 1; i <= n; i++)
		{
			if (b[i] == arr[l[0]]) {
				prev = i;
				break;
			}
		}
		//cout << "Changed " << b[l[0]] << " to " <<arr[l[0]] << "Changed " << b[prev] << " to " << l[0] << endl;
		b[l[0]] = arr[l[0]];
		b[prev] = l[0];
	}
	else if(cnt>=2) {
		for (int i = 0; i < p-1; i++)
		{
			b[l[i]] = l[i + 1];
		}
		b[l[p - 1]] = l[0];
	}

	cout << count << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
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
	return 0;
}