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
    const ll inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 1000 + 10;
    ll a[N];
    ll b[N];
    void solve(){
        int n, k;
        cin>>n>>k;
        if(n==1 && k==1){
            cout<<1<<endl;
            return;
        }
        if(k==1){
            cout<<1<<endl;
            return;
        }
        if(n==1){
            cout<<2<<endl;
            return;
        }
        ll ans=1+n;
        ll s=0;
        for(int i=1; i < n; i++){
            a[i]=1;
            s+=1;
        }

        // for(int i=1; i<n; i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;

        for(int i=3; i<=k; i++){
            b[1]=a[n-1];
            s=a[n-1];
            b[1]%=mod;
            ans+=b[1];
            ans%=mod;
            for(int j=2; j<n; j++){
                s+=a[n-j];
                s%=mod;
                b[j]=s;
                b[j]%=mod;
                ans+=b[j];
                ans%=mod;
            }

            s=0;
            for(int j=1; j<n; j++){
                a[j]=b[j];
            }
            // for(int j=1; j<n; j++){
            //     cout<<a[j]<<" ";
            // }
            // cout<<endl;
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