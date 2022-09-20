#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
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
//const int inf = 2e18 + 100;
const int mod = 998244353;
const int N = 200000+10;
//----------------------------------------------
 
bool check(ll hc,ll dc, ll hm, ll dm){
    //character attack k times
    ll k=(hm+dc-1)/dc;
    //monster attacks k-1 times
    ll p=(hc+dm-1)/dm;
    if(k>p) return false;
    else return true;
 
}
 
 
void solve(){
    ll hc, dc, hm, dm;
    cin>>hc>>dc>>hm>>dm;
    ll k, w, a;
    cin>>k>>w>>a;
    for(ll i=0; i<=k; i++){
        ll ndc=dc+(i*w);
        ll nhc=hc+((k-i)*a);
        if(check(nhc,ndc,hm,dm)){
            //cout<<nhc<<" "<<ndc<<endl;
            // ll k=(hm+ndc-1)/ndc;
            // ll p=(nhc+dm-1)/dm;
            //cout<<k<<endl;
            //cout<<p<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
 
    cout<<"NO"<<endl;
 
 
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