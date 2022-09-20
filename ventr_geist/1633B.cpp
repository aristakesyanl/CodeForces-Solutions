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
const ll inf = 2e18 + 100;
const int mod = 998244353;
const int N = 200000+10;
//----------------------------------------------
int a[N];
int b[N];
 
void solve(){
    string s;
    cin>>s;
    if(sz(s)<3){
        cout<<0<<endl;
        return;
    }
 
    int a=0;
    int b=0;
    for(int i=0; i<sz(s); i++){
        if(s[i]=='0')a++;
        else b++;
    }
    if(a==b){
        cout<<a-1<<endl;
        return;
    }
    else{
        cout<<min(a,b)<<endl;
        return;
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