#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;
 
//----------------------------------------------
int a[N];
//----------------------------------------------
 
 
void solve(){
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    int mn=INT_MAX;
    int mx=INT_MIN;
    ll ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mn=min(a[i],mn);
        mx=max(a[i],mx);
    }

    for(int i=1; i<n; i++){
        ans+=abs(a[i]-a[i-1]);
    }

    if(1<mn) ans+=min(min(a[0]-1,a[n-1]-1),2*(mn-1));
    if(x>mx) ans+=min(min(x-a[0],x-a[n-1]),2*(x-mx));

    cout<<ans<<endl;

}
 
int main(int argc, char *argv[]){
 
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