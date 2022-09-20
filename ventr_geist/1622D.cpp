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
const int N = 5000+10;
int n;

//----------------------------------------------
int pref[N];
ll dp[N][N];

//----------------------------------------------

void build(){
    for(int i=0; i<n+1; i++){
        for(int j=0; j<n+1; j++){
            if(i<j) dp[i][j]=0;
            else if(i==0 || j==0) dp[i][j]=1;
            else if(i<j) dp[i][j]=0;
            else{
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-1])%mod;
            }
        }
    }
}
void solve(){

    // for(int i=0; i< N; i++){
    //     for(int j=0; j< N; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int k;
    cin>>n>>k;
    string s;
    cin>>s;
    build();
    for(int i=0; i<n; i++){
        if(i==0){
            if(s[i]=='1')pref[i]=1;
            else pref[i]=0;
        }
        else{
            if(s[i]=='1') pref[i]=pref[i-1]+1;
            else pref[i]=pref[i-1];
        }

    }
    ll ans=1;

    if(pref[n-1]<k){
        cout<<ans<<endl;
        return;
    }

    ll len, one;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(i==0){
                len=j+1;
                one=pref[j];
            }
            else{
                len=j-i+1;
                one=pref[j]-pref[i-1];
            }
            if(one>k) continue;
            else{
                if(s[i]=='0' && s[j]=='0'){
                    if(one<2) continue;
                    else{
                        one-=2;
                        ans+=dp[len-2][one];
                        ans%=mod;
                    }

                }
                if((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')){
                    if(one<1 || one==len) continue;
                    else{
                        one--;
                        ans+=dp[len-2][one];
                        ans%=mod;
                    }

                }
                
                if(s[i]=='1' && s[j]=='1'){
                    if(one>len-2) continue;
                    else{
                        ans+=dp[len-2][one];
                        ans%=mod;
                    }

                }

            }
            // cout<<len-2<<" "<<one<<endl;
            // cout<<"add="<<dp[len-2][one];
            // cout<<" i="<<i<<" j="<<j<<" ans="<<ans<<endl;
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

    // int t;
    // cin >> t;
    // int t1=t;
    // while (t--) {
    //   //cout<<t1-t<<": ";
    //   solve();
    // }
    solve();
    return 0;
}