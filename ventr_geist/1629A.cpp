#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 100 + 10;
pair<int,int> p[N];
 
 
void solve(){
    int n, k;
    cin>>n>>k;
    int ans=k;
    for(int i=0; i<n; i++){
        cin>>p[i].first;
    }
    for(int i=0; i<n; i++){
        cin>>p[i].second;
    }

    sort(p,p+n);
    for(int i=0; i<n; i++){
        if(p[i].first<=ans) ans+=p[i].second;
    }
    cout<<ans<<endl;
    
}
 
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
        cin.tie(0);
        ios_base::sync_with_stdio(false);
     
    int t;
    cin >> t;
    int t1=t;
    while (t--) {
      //cout<<t1-t<<": ";
      solve();
    }
    //solve();
    return 0;
}