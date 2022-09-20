#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 200000 + 10;


void solve(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    vector<vector<int>> dp(n,vector<int>(m));
    // vector<bool> c(m, true);
    // vector<bool> d(m, true);
    // vector<bool> row_complete(m,false);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    // for(int i=0;i<m; i++){
    //     if(v[0][i]=='X'){
    //         dp[0][i]='N';
    //     }
    //     else{
    //         dp[0][i]='E';
    //     }
    // }

    // for(int i=0;i<n; i++){
    //     if(v[i][0]=='X'){
    //         dp[i][0]='N';
    //     }
    //     else{
    //         dp[i][0]='E';
    //     }
    // }
    // for(int i=1; i<n; i++){
    //     for(int j=1; j<m; j++){
    //         if(v[i][j]=='X') dp[i][j]='N';
    //         else if(dp[i-1][j]=='E' || dp[i][j-1]=='E') dp[i][j]='E';
    //         else{
    //             dp[i][j]='N';
    //         }
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }



    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(i!=0 && j!=0 && v[i][j]!='X' && dp[i][j]=='N'){
    //             c[i]=false;
    //             break;
    //         }
    //     }
    // }

    // for(int i=1; i<m; i++){
    //     if(d[i-1]==true && c[i]==true) d[i]=true;
    //     else d[i]=false;

    // }

    // for(int i=0; i<m; )

    // int q;
    // cin>>q;
    // while(q--){
    //     int x1,x2;
    //     cin>>x1>>x2;
    //     x1--;
    //     x2--;
    //     if(x1==0 && d[x2]==true){
    //         cout<<"YES"<<endl;
    //         return;
    //     }
    //     else{
    //         if(d[x2]==false && c[x1]==false && )
    //     }

    // }

    for(int i=0; i<m; i++){
        dp[0][i]=0;
    }
    for(int i=0; i<n; i++){
        dp[i][0]=0;
    }

   
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            int d=0;
            if(v[i-1][j]=='X' && v[i][j-1]=='X') d=1;
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+d;
        }
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        int x1, x2;
        cin>>x1>>x2;
        x1--;
        x2--;
        if(dp[n-1][x2]-dp[n-1][x1]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
       
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
    //   solve();
    // }
    solve();
    return 0;
}