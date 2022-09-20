#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 150000+10;

void solve(){
    int n;
    cin>>n;
    map<int, int> m;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    int ans=-1;
    for(int i=1; i<=n; i++){
        if(m.count(v[i])){
            ans=max(ans,m[v[i]]+n-i);
        }
        m[v[i]]=i;
    }

    cout<<ans<<endl;
}


int main(){
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