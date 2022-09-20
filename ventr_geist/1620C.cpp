#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 5000 + 10;
ll cnt[N];

void solve(){
    int n, k;
    ll x;
    cin>>n>>k>>x;
    x--;
    string s;
    cin>>s;
    ll count=0;
    int p=0;
    for(int i=0; i<n; i++){
        if(s[i]=='*') count++;
        else{
            if(count>0){
                cnt[p++]=count;
                count=0;
            }
        }
    }
    if(count>0) cnt[p++]=count;
    
    for(int i=0; i<p; i++){
        cnt[i]=1ll*cnt[i]*k+1;
    }
    // for(int i=0; i<p; i++){
    //     cout<<cnt[i]<<" ";
    // }
    
    // cout<<endl;

    stack<ll> ans;

    for(int i=p-1; i>=0; i--){
        ans.push(x%cnt[i]);
        x/=cnt[i];
    }
    // while(!ans.empty()){
    //     cout<<ans.top()<<" ";
    //     ans.pop();
    // }
    // cout<<endl;

    int i=0;
    bool flag=true;
    while(i<n){
        if(s[i]=='a'){
            cout<<"a";
            flag=true;
            i++;
        }
        else{
            if(flag){
                string s1=string(ans.top(), 'b');
                cout<<s1;
                ans.pop();
                flag=false;
            }
            i++;
        }
    }
    cout<<endl;

    
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