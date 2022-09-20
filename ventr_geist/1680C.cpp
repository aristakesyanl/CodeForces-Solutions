#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;

//----------------------------------------------

//------------------------------------------------
void solve(){

    string s;
    cin>>s;
    int n=sz(s);
    int one=0;
    vector<int> cnt(n+1);
    vector<int> pref(n+1);
    cnt[0]=n;
    for(int i=n-1;i>=0; i--){
        if(s[i]=='1') one++;
        cnt[one]=i;
       
    }

    for(int i=0; i<n; i++){
        pref[i+1]=pref[i]+(s[i]=='1');
    }
    if(one==0 || one==n){
        cout<<0<<endl;
        return;
    }

    
    int ans=min(n-one, one);
    
    for(int i=0; i<=n; i++){
        int l=pref[i];
        int r=one;
        while(l<=r){
            int m=(l+r)>>1;
            int z=cnt[m-pref[i]]-i-(pref[cnt[m-pref[i]]]-pref[i]);
            if(z>m){
                l=m+1;
            }
            else{
                r=m-1;
                ans=min(m,ans);
            }

        }
    }

    cout<<ans<<endl;
}
 

//-----------------------------------------------
 
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