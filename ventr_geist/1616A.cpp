#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 100 + 10;
int cnt[N];

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<N; i++){
        cnt[i]=0;
    }
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        cnt[abs(x)]++;
    }
    int ans=0;
    for(int i=0; i<N; i++){
        if(cnt[i]>=1) ans++;
        if(cnt[i]>1 && i!=0) ans++;
    }
    cout<<ans<<endl;
    
}
     
int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

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