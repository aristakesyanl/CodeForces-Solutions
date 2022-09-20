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
const int N = 100000 + 10;
int arr[N];
int b[N];
void solve() {
	string s;
	cin >> s;
	char mn = s[0];
	int index=0;
	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] < mn) {
			mn = s[i];
			index = i;
		}
	}
	cout << mn <<" ";
	for (int i = 0; i < s.length(); i++)
	{
		if (i != index) cout << s[i];
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