#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;
int arr[N];
ll pref[N];
void solve(){
    int n;
    cin>>n;
    ll k;
    cin>>k;
    ll sum=0;
    int mn=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
        mn=min(mn, arr[i]);
    }
    if(sum<=k){
        cout<<0<<endl;
        return;
    }
    if(n==1){
        cout<<arr[0]-k<<endl;
        return;
    }

    sort(arr, arr+n);
    pref[0]=arr[0];
    for(int i=1; i<n; i++){
        pref[i]=pref[i-1]+arr[i];
    }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    ll ans=arr[0]+n-1;
    for(int i=0; i<n; i++){
        ll p=k-pref[i]+mn;
        ll q=n-i;
        double g=p/(double)q;
        ll d=floor(g);
        ll h=mn-d;
        if(h<0) ans=min(ans,q-1);
        else ans=min(ans, q+h-1);
        //cout<<"i:"<< i<<endl;
        //cout<<"p="<<p<<" d="<<d<<" h="<<h<<endl;
        //cout<<"ans="<<ans<<endl;
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
    while (t--) {
      solve();
    }
    //solve();
    return 0;
}