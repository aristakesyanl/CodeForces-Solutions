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
 
//----------------------------------------------
const ll inf = 2e18 + 100;
const int mod = 998244353;
const int N = 200000+10;
//----------------------------------------------
 
void solve(){
    ll n,k;
    cin>>n>>k;
    if(n==4 & k==3){
        //cout<<"case 1"<<endl;
        cout<<-1<<endl;
        return;
    }

    if(k!=n-1){
        //cout<<"case 2"<<endl;
        cout<<k<<" "<<n-1<<endl;
        for(ll i=1; i<n/2; i++){
            if(k<n/2 && i==k){
                cout<<n-i-1<<" "<<0<<endl;
            }
            else if(k>=n/2 && i==n-k-1){
                cout<<i<<" "<<0<<endl;
            }
             else cout<<i<<" "<<n-i-1<<endl;
        }
        return;

    }
  
    //cout<<"case 3"<<endl;
    cout<<n-2<<" "<<n-1<<endl;
    cout<<1<<" "<<3<<endl;
    for(ll i=2;i<n/2; i++){
        if(i==3){
            cout<<0<<" "<<n-i-1<<endl;
        }
        else cout<<i<<" "<<n-i-1<<endl;
    }

   
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