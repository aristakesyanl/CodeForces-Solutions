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
const int N = 100000+10;
//----------------------------------------------

 
void solve(){
    int n;
    cin>>n;
    int l, r, c;
    int mn=INT_MAX;
    int mx=INT_MIN;
    int sum=INT_MAX;
    int s1=INT_MAX;
    int s2=INT_MAX;
    bool flag=true;
    int mxlen=0;
    for(int i=0; i<n; i++){
        cin>>l>>r>>c;
        if(mn>l) s1=c, mn=l, sum=INT_MAX;
        if(mn==l) s1=min(s1,c);
        if(mx<r) s2=c, mx=r, sum=INT_MAX;
        if(mx==r) s2=min(s2,c);
        sum=min(sum,s1+s2);
        if(mn==l && mx==r) sum=min(sum,c);
        // cout<<"mn="<<mn<<" mx="<<mx<<endl;
        // cout<<"s1="<<s1<<" s2="<<s2<<endl;
        cout<<sum<<endl;
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