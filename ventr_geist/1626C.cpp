#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100+10;
ll k[N];
ll h[N];
ll d[N];
ll sum(int l, int r){
    return (ll)(l+r)*(r-l+1)/2;
}


void solve(){
    int n;
    cin>>n;
    k[0]=0;
    for(int i=1; i<=n; i++){
        cin>>k[i];
    }
    h[0]=0;
    for(int i=1; i<=n; i++){
        cin>>h[i];
    }
    ll ans=0;
    d[n]=h[n];
    for(int i=n-1; i>=1; i--){
        d[i]=max(h[i],d[i+1]-(k[i+1]-k[i]));
    }
    
    for(int i=1; i<=n; i++){
        if(d[i]>k[i]-k[i-1]){
            d[i]=d[i-1]+(k[i]-k[i-1]);
            ans+=sum(d[i-1]+1,d[i]);
        }
        else{
            ans+=sum(1,d[i]);
        }
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