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
 
int a[N];
int b[N];
int dp[N*N][N];
 
//----------------------------------------------
 
 
void solve(){
    int n;
    cin>>n;
    int sum=0;
    int s=0;
    int mn=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        s+=a[i];
    }

    for(int i=1; i<=n; i++){
        cin>>b[i];
        s+=b[i];
    }

    for(int i=1; i<=n; i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
        mn+=a[i];
    }

 
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int s1=s;
 
    s/=2;
 
    for(int i=1; i<=n; i++){
        sum+=(a[i]*a[i]+b[i]*b[i]);
    }
    sum*=(n-2);
    //cout<<"sum="<<sum<<endl;
    int w=s-mn;
    //cout<<"s="<<s<<" mn="<<mn<<" w="<<w<<endl;
 
    for(int i=0; i<=n; i++){
        for(int j=0; j<=w; j++){
            dp[j][i]=false;
        }
    }
    dp[0][0]=true;
 
    for(int i=1; i<=n; i++){
        int d=b[i]-a[i];
        for(int j=0; j<=w; j++){
            if(j-d>=0) dp[j][i]|=dp[j-d][i-1];
            dp[j][i]|=dp[j][i-1];
        }
    }
 
    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<=w; j++){
    //         cout<<dp[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
 
    int mx=INT_MIN;
 
   for(int i=0; i<=n; i++){
    for(int j=0; j<=w; j++){
        if(dp[j][i]) mx=max(j,mx);
    }
   }
 
   mn+=mx;
 
   sum+=(mn*mn+(s1-mn)*(s1-mn));
 
   cout<<sum<<endl;
 
    
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