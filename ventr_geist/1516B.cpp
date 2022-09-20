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
const int N = 2000 + 10;
ll arr[N];
ll pref[N];
ll suf[N];

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if(n==1){
		cout<<"YES"<<endl;
		return;
	}
	if(n==2){
		if(arr[0]!=arr[1]){
			cout<<"NO"<<endl;
			return;
		}
		cout<<"YES"<<endl;
		return;
	}
	
	pref[0] = arr[0];
	for (int i = 1; i < n; i++) {
		pref[i] = pref[i - 1] ^ arr[i];
	}
 
	suf[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		suf[i] = suf[i + 1] ^ arr[i];
	}

 
	for (int i = 0; i < n - 1; i++) {
		if (pref[i] == suf[i + 1]) {
			cout << "YES" << endl;
			return;
		}
	}
	
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			ll x1=pref[i];
			ll x3=suf[j+1];
			ll x2=pref[i]^pref[j];
			//cout<<x1<<" "<<x2<<" "<<x3<<endl;
			if(x1==x2 && x2==x3){
				cout<<"YES"<<endl;
				return;
			}
		}
	}

	cout<<"NO"<<endl;
 
}

int main() {

	// #ifndef ONLINE_JUDGE
 //    // for getting input from input.txt
 //    freopen("input.txt", "r", stdin);
 //    // for writing output to output.txt
 //    freopen("output.txt", "w", stdout);
 //    #endif
    
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