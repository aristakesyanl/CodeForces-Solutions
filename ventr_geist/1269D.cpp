#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 300000 + 10;
int arr[N];
void solve() {
    int n;
    ll w=0, b=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i&1){
            w+=arr[i]/2;
            w+=arr[i]%2;
            b+=arr[i]/2;
        }
        else{
            b+=arr[i]/2;
            b+=arr[i]%2;
            w+=arr[i]/2;
        }
    }

    cout<<min(w,b)<<endl;

}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
        
    cin.tie(0);
    ios_base::sync_with_stdio(false);

	// int t;
	// cin >> t;
	// while (t--) {
	//   solve();
	// }
	solve();
	return 0;
}