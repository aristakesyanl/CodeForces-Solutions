#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 50+10;
int arr[N];

void solve(){
    int n;
    cin>>n;
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    cout<<mx-mn<<endl;
    
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

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