#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;
 
//----------------------------------------------
int a[N];
//----------------------------------------------
 
 
void solve(){
    int n;
    cin>>n;
    vector<int> cnt(n+1);
    for(int i=0; i<n; i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
 
    vector<int> s;
    s.push_back(0);
    for(int i=1; i<=n;i++){
        s.push_back(s.back()+cnt[i]);
    }
 
    int ans=INT_MAX;
    for(int i=0; i<20;i++){
        for(int j=0; j<20;j++){
            for(int k=0; k<20;k++){
                int res=0;
                int s1=1<<i;
                int s2=1<<j;
                int s3=1<<k;
                int ind1=upper_bound(s.begin(),s.end(),s1)-s.begin();
                if(s[ind1-1]>s1) continue;
                else res+=s1-s[ind1-1];
                int ind2=upper_bound(s.begin(),s.end(),s2+s[ind1-1])-s.begin();
                if(s[ind2-1]-s[ind1-1]>s2) continue;
                else res+=s2-s[ind2-1]+s[ind1-1];
                if(s[sz(s)-1]-s[ind2-1]>s3) continue;
                else res+=s3-s[sz(s)-1]+s[ind2-1];
                ans=min(ans,res);
            }
        }
    }
 
    cout<<ans<<endl;
 
}
 
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