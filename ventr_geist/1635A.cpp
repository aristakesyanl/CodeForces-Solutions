#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
#define yes cout<<"YES"<<endl; return;
#define no  cout<<"NO"<<endl; return;
typedef long long ll;
//---------------------------------------------- 
template<class T>
void in(T *arr,int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
 
template<class T>
void out(T *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int get(int k, int p){
    return ((k>>p)&1);
}
 
//----------------------------------------------
const int inf = 2e9;
const int mod = 998244353;
const int N = 100+10;
 
//----------------------------------------------

ll arr[N];
void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    vector<ll> cnt(32,0);

    for(ll i=0; i<n; i++){
        for(ll j=0; j<32; j++){
            ll k=arr[i]>>j;
            if(k&1) cnt[j]++;
        }
    }

    // for(int i=0; i<32; i++)
    //     cout<<cnt[i]<<" ";
    // cout<<endl;


    ll ans=0;

    for(ll i=0; i<32; i++){
        if(cnt[i]>0) ans+=(1<<i);
    }

    cout<<ans<<endl;
}
 
int main(int argc, char *argv[]) {
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