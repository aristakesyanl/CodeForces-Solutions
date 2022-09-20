#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pa;
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;
void solve() {

    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    string s1=s;
    for(int i=k; i<n; i++){
        s1[i]=s1[i-k];
    }

    if(s1>=s){
        cout<<n<<endl;
        cout<<s1<<endl;
        return;
    }

    for(int i=k-1; i>=0; i--){
        if(s1[i]=='9') s1[i]='0';
        else {
            s1[i]++;
            break;
        }
    }

    for(int i=k; i<n; i++){
        s1[i]=s1[i-k];
    }

    cout<<n<<endl;
    cout<<s1<<endl;

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