#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const ll mod = 1e9+7;
const int N = 200000+10;
const int K=20;
 
//----------------------------------------------

void solve(){
    int n, p;
    cin>>n>>p;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> dp(p+1,0);
    
    set<ll> s;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    s.insert(a[0]);
    vector<ll> nw;
    nw.push_back(a[0]);

    auto hasParent=[&](ll x){
        while(x>0){
            if(x&1){
                x--;
                x/=2;
                if(s.find(x)!=s.end()){
                    return true;
                }
            }
            else if(x%4==0){
                x/=4;
                if(s.find(x)!=s.end()){
                    return true;
                }

            }
            else{
                return false;
            }
        }
        return false;
    };

    for(int i=1; i<n; i++){
        if(!hasParent(a[i])){
            s.insert(a[i]);
            nw.push_back(a[i]);
        }
    }

    // for(auto a: s){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    for(int i=1; i<=min(30,p);i++){
        for(int j=0; j<sz(nw);j++){
            if((nw[j]<(1<<i)) && (nw[j]>=(1<<(i-1)))){
                dp[i]++;
            }
        }
    }

    
    for(int i=2; i<=p;i++){
        dp[i]+=(dp[i-1]+dp[i-2]);
        dp[i]%=mod;
    }
    
    ll sum=0;
    for(int i=0; i<=p; i++){
        sum+=dp[i];
        sum%=mod;
    }

    cout<<sum<<endl;


}
 
int main(int argc, char *argv[]){
 
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
 
    cin.tie(0);
    ios_base::sync_with_stdio(false);
 
    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }
    solve();
    return 0;
}