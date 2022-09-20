    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;

    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 200000 + 10;
    int arr[32][N];
    void build(){
        for(int i=31; i>=0; i--){
            for(int j=1; j<=N; j++){
                int k=j>>i;
                arr[i][j]=arr[i][j-1];
                if(k&1) arr[i][j]++;
                
            }
        }

    }

    void solve(){
        int l, r;
        cin>>l>>r;
        int ans=INT_MAX;
        for(int i=31; i>=0; i--){
            int p=arr[i][r]-arr[i][l-1];
            ans=min(ans,r-l+1-p);
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
        build();
        // for(int i=31; i>=0; i--){
        //     for(int j=1; j<100; j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
     
        int t;
        cin >> t;
        while (t--) {
          solve();
        }
        //solve();
        return 0;
    }