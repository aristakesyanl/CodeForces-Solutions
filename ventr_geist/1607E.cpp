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
void solve() {
	int n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	int l, r, u, d;
	l = 0;
	r = 0;
	d = 0;
	u = 0;
	int size = s.size();
	int pos=-1;
	int x, y;
	x = y = 0;
	int a = 1;
	int b = 1;
	for (int i = 0; i < size; i++) {
		if (s[i] == 'L')x--;
		if (s[i] == 'R')x++;
		if (s[i] == 'U')y++;
		if (s[i] == 'D')y--;
		//cout << "x=" << x << " y=" << y << endl;
		l = min(l, x); //max number of cells we expand to left from starting position
		r = max(r, x); //right
		u = max(u, y); //up
		d = min(d, y); //down
		//from the starting position we moved l cells right
		//r cells to left +1 for the starting position
		//the number of total cells should be <= m
		// u+abs(d)+1<=n
		//we can choose any cell that satisfies those conditions
		//cout << "l=" << l << " r=" << r << " d=" << d << " u=" << u << endl;
		//cout << m << " " << n << endl;
		//cout << r + abs(l) + 1 << " " << u + abs(d) + 1 << endl;
		if ((r + abs(l) + 1) <= m && (u + abs(d) + 1) <= n) {
			//cout <<i + 1 << " Ok" << endl;
			//cout << "l=" << l << " r=" << r << " d=" << d << " u=" << u << endl;
			a = 1 + abs(l);
			b = 1 + u;
		}
	
	}
	
	cout << b << " " << a << endl;
	
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