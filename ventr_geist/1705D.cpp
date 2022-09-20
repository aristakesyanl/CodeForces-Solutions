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
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    if(s==t){
        cout<<0<<endl;
        return;
    }
    string s1, t1;
    s1.push_back(s[0]);
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) continue;
        else{
            s1.push_back(s[i]);
        }
    }

    t1.push_back(t[0]);
    for(int i=1; i<n; i++){
        if(t[i]==t[i-1]) continue;
        else{
            t1.push_back(t[i]);
        }
    }
    if(s1!=t1){
        cout<<-1<<endl;
        return;
    }
    else{
        ll ans=0;
        vector<int> a, b;
        a.push_back(0);
        for(int i=1; i<sz(s);i++){
            if(s[i]==s[i-1]) continue;
            else{
                a.push_back(i);
            }
        }

        b.push_back(0);
        for(int i=1; i<sz(t);i++){
            if(t[i]==t[i-1]) continue;
            else{
                b.push_back(i);
            }
        }

        for(int i=0; i<sz(a);i++){
            ans+=abs(a[i]-b[i]);
        }
        cout<<ans<<endl;
    }
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