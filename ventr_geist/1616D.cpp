#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
#define sz(x) ((int)(x).size())
#define yes cout<<"YES"<<endl; return;
#define no  cout<<"NO"<<endl; return;
typedef long long ll;
//---------------------------------------------- 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 50000 + 10;
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
int arr[N];

void solve(){
    int n;
    cin>>n;
    in(arr,n);
    int x;
    cin>>x;
    for(int i=0; i<n; i++) arr[i]-=x;
    vector<bool> v(n,true);
    if(arr[1]+arr[0]<0) v[1]=false;
    for(int i=2; i<n; i++){
        if((arr[i]+arr[i-1]<0 && v[i]==true && v[i-1]==true) || (arr[i]+arr[i-1]+arr[i-2]<0 && v[i-2]==true && v[i-1]==true && v[i]==true)) v[i]=false;
    }
    int ans=n;
    // for(int i=0; i<n; i++) cout<<v[i]<<" ";
    //     cout<<endl;
    for(int i=0; i<n; i++) if(v[i]==false) ans--;
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