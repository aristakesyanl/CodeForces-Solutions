    #include <iostream>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    #include <set>
    #include <unordered_set>
    #include <queue>
    #include <deque>
    #include <string>
    #include <sstream>
    #include <iomanip>
    #include <map>
    #include <unordered_map>
    #include <stack>
    #include <cstdio>
    #include <climits>
    #include <tuple>
    #include <ctime>
    #include <cstring>
    #include <numeric>
    #include <functional>
    #include <chrono>
    #include <cassert>
    #include <bitset>
    using namespace std;
    typedef long long ll;
    typedef pair<int, int> pa;
    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 5000 + 10;
    ll dp[N][N];
    int a[N];
    int b[N];
    ll pref[N];
    void solve() {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
     
        for(int i=1; i<=n; i++){
            cin>>b[i];
        }
     
        pref[0]=0;
        for(int i=1; i<=n; i++){
            pref[i]=pref[i-1]+1ll*a[i]*b[i];
        }
     
        for(int i=1; i<n; i++){
            dp[i][i+1]=1ll*a[i]*b[i+1]+1ll*a[i+1]*b[i];
        }
     
        for(int i=1; i<=n; i++){
            dp[i][i]=1ll*a[i]*b[i];
        }
     
        ll ans=pref[n];
     
        for(int i=3; i<=n; i++){
            for(int j=1;j<=n-i+1; j++){
                dp[j][j+i-1]=dp[j+1][j+i-2]+1ll*a[j]*b[j+i-1]+1ll*a[j+i-1]*b[j];
            }
        }
     
        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=n; j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
     
        ll x;
     
        for(int i=1; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                x=pref[i-1]+dp[i][j]+pref[n]-pref[j];
                ans=max(ans,x);
     
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
        // while (t--) {
        //     solve();
        // }
            solve();
        return 0;
    }