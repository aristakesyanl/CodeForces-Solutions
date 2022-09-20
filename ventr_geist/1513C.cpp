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
    const ll mod = 1e9 + 7;
    const int N = 200000 + 10;
    ll dp[N][11];
    void build(){
        for(int i=1; i<10; i++){
            dp[i][1]=1;
            dp[i][10]=1;
        }
        dp[10][0]=1;
        dp[10][1]=1;
        dp[10][10]=2;
        for (int i = 11; i <= N; i++) {
          for (int j = 1; j < 10; j++) {
            dp[i][j] = dp[i - 1][j - 1];
          }

          dp[i][0] += dp[i-1][9];
          dp[i][0]%=mod;
          dp[i][1] += dp[i-1][9];
          dp[i][1]%=mod;
          dp[i][10] = (dp[i - 1][10]%mod + dp[i-1][9]%mod)%mod;
        }

    }
    void solve() {
        int n,m;
        cin>>n>>m;
        ll ans=0;
        while(n>0){
            int p=n%10;
            ans+=dp[p+m][10];
            ans%=mod;
            n/=10;
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

        build();
        int t;
        cin >> t;
        while (t--) {
            solve();
        }
        //solve();
        return 0;
    }