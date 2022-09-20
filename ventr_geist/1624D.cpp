#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 200000 + 10;
int cnt[26];
bool check(int m, int k){
    if(m%2==0){
        int m1=m/2;
        int pa=0;
        for(int i=0; i<26; i++){
            int q=cnt[i]/2;
            pa+=q;
        }
        if(k*m1<=pa) return true;
        else return false;
    }

    else{
        int m1=m/2;
        int pa=0;
        int s=0;
        for(int i=0; i<26; i++){
            int q=cnt[i]/2;
            pa+=q;
            s+=cnt[i];
        }
        if(k*m1<=pa && k*m<=s) return true;
        else return false;
    }

}

void solve(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<26; i++){
        cnt[i]=0;
    }
    
    for(int i=0; i<n; i++){
        cnt[s[i]-'a']++;
    }
    // if(check(n,k)) cout<<"YES"<<endl;
    // cout<<"NO"<<endl;
    int ans=0;
    int l=0;
    int r=n/k;
    while(l<r){
        int m=l+(r-l+1)/2;
        if(check(m,k)) l=m;
        else r=m-1;

    }
    cout<<l<<endl;

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