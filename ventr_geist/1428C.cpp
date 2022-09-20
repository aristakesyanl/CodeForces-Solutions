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
const int N = 200000 + 10;
using namespace std;
void solve() {
	string s;
	cin >> s;
	int n = s.size();
	int count = n;
	int index = -1;
	for (int i = n-1; i >= 0; i--)
	{
		if (s[i] == 'B') {
			index = i;
			break;
		}
	}
	if (index == -1) {
		cout << count << endl;
		return;
	}
	int count_b = 0;
	//while (i>=0) {
	//	if (s[i] == 'B') {
	//		count_b++;
	//		i--;
	//	}
	//	if (s[i] == 'A') {
	//		//count_b--;
	//		if (count_b) count_b--;
	//		count -= 2;
	//		i--;
	//	}
	//}
	for (int i = index; i >= 0; i--)
	{
		if (s[i] == 'B') {
			count_b++;
		}
		if (s[i] == 'A') {
			if (count_b) {
				count_b--;
				count -= 2;
			}
		}
	}
	count -= (count_b / 2) * 2;
	cout << count << endl;

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