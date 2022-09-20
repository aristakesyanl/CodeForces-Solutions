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
const int n = 2e5 + 10;
//void solve() {
//	string s;
//	cin >> s;
//	bool present[26] = {false};
//	bool ch[26][26] = { false };
//	int cnt[26];
//	int n = s.size();
//	if (n == 1) {
//		cout << "YES" << endl;
//		cout << "abcdefghijklmnopqrstuvwxyz" << endl;
//		return;
//	}
//	if (n >= 3) {
//		for (int i = 1; i < n - 1; i++)
//		{
//			ch[s[i] - 'a'][s[i - 1] - 'a'] = true;
//			ch[s[i] - 'a'][s[i + 1] - 'a'] = true;
//		}
//
//	}
//	ch[s[0] - 'a'][s[1] - 'a'] = true;
//	ch[s[n - 1] - 'a'][s[n - 2] - 'a'] = true;
//
//
//	int count;
//	for (int i = 0; i < 26; i++)
//	{
//		count = 0;
//		for (int j = 0; j < 26; ++j) {
//			if (ch[i][j] == true) {
//				count++;
//			}
//		}
//		cnt[i] = count;
//
//	}
//
//	/*for (int i = 0; i < 26; i++)
//	{
//		for (int j = 0; j < 26; j++) {
//			cout << ch[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	for (int i = 0; i < 26; i++)
//	{
//		if (cnt[i] > 2) {
//			cout << "NO" << endl;
//			return;
//		}
//	}
//
//
//	/*for (int i = 1; i < n; i++)
//	{
//		if (ch[s[i - 1]][s[i]] == true) continue;
//		else {
//			cout << "NO" << endl;
//			return;
//		}
//	}*/
//
//	string ans;
//
//	bool flag = false;
//	// if flag=0 add to string from right
//	// if flag=1 add to string from left
//
//	ans += s[0];
//	present[s[0] - 'a'] = true;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (!present[s[i] - 'a'] && !flag) {
//			ans += s[i];
//			present[s[i] - 'a'] = true;
//		}
//		else if (present[s[i] - 'a'] && !flag) {
//			if (ch[s[i - 1] - 'a'][s[i] - 'a'] == true) {
//				flag = true;
//			}
//			else {
//				cout << "NO" << endl;
//				return;
//			}
//		}
//
//		else if (!present[s[i] - 'a'] && flag) {
//			ans = s[i]+ans;
//			present[s[i] - 'a'] = true;
//		}
//
//		else {
//			if (ch[s[i - 1] - 'a'][s[i] - 'a'] == true) {
//				flag = true;
//			}
//			else {
//				cout << "NO" << endl;
//				return;
//			}
//
//		}
//	}
//
//	cout << "YES" << endl;
//	for (int i = 0; i < 26; i++)
//	{
//		if (!present[i]) {
//			char c = i + 'a';
//			ans += c;
//		}
//	}
//
//	cout << ans << endl;
//
//
//}

int computeXOR(int n){
	if(n % 4 == 0)
		return n;

	// If n%4 gives remainder 1
	if (n % 4 == 1)
		return 1;

	// If n%4 gives remainder 2
	if (n % 4 == 2)
		return n + 1;

	// If n%4 gives remainder 3
	return 0;
}

void solve() {
	int a, b;
	cin >> a >> b;
	int k = computeXOR(a - 1);
	int p = k ^ b;
	//cout <<"k="<< k << endl;
	//cout << "k^b= " << p <<endl;
	if (k == b) {
		cout<<a<<endl;
	    return;
	}

	if ((k ^ b) != a) {
		cout << a + 1 << endl;
		return;
	}

	else {
		cout << a + 2 << endl;
		return;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}