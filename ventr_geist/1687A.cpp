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
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //if k<n find largest subarray with length k
    if(k<=n){
        ll s=0;
        ll ans;
        for(int i=0; i<k; i++){
            s+=a[i];
        }
        ans=s;
        for(int i=k; i<n; i++){
            s+=a[i];
            s-=a[i-k];
            ans=max(ans,s);
        }

        ans+=(1ll*k*(k-1))/2;
        cout<<ans<<endl;
        return;

    }
    else{
        ll ans=0;
        for(int i=0; i<n; i++){
            ans+=a[i];
        }

        ans+=(1ll*(2*k-n-1)*n)/2;
        cout<<ans<<endl;
        return;

    }
    
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