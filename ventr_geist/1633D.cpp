#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
#define sz(x) ((int)(x).size())
#define yes cout<<"YES"<<endl; return;
#define no  cout<<"NO"<<endl; return;
typedef long long ll;
//---------------------------------------------- 
template<class T>
void in(T *arr,int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
 
template<class T>
void out(T *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int get(int k, int p){
    return ((k>>p)&1);
}
 
//----------------------------------------------
const int inf = 2e9;
const int mod = 998244353;
const int N = 1001;
const int M=12*N;
//----------------------------------------------
int b[N];
int c[N];
int dp[N];
int d[N][M];

void build(){
    for(int i=0; i<N; i++){
        dp[i]=inf;
    }

    dp[1]=0;
    for(int i=1; i<N; i++){
        for(int j=1; j<=(i/2+1);j++){
            int k=i+i/j;
            if(k<N){
                dp[k]=min(dp[k],dp[i]+1);
            }
            //cout<<k<<endl;
        }
    }

}

void solve(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }

    for(int i=1; i<=n; i++){
        cin>>c[i];
    }

    // for(int i=1; i<=n; i++){
    //     cout<<dp[b[i]]<<" ";
    // }
    // cout<<endl;
    k=min(k,M);


    for(int i=1; i<=n; i++){
        if(i==1 && b[i]==1) d[i][0]=c[1];
        else{
            if(b[i]==1) d[i][0]=d[i-1][0]+c[i];
            else d[i][0]=d[i-1][0];
        }
    }

    for(int i=0; i<=k; i++){
        d[0][i]=0;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=k;j++){
            if(dp[b[i]]>j) d[i][j]=d[i-1][j];
            else{
                d[i][j]=max(d[i-1][j],d[i-1][j-dp[b[i]]]+c[i]);
            }
        }
    }

    //cout<<d[0][1]<<endl;

    // for(int i=0; i<=n; i++){
    //     for(int j=0; j<=min(k,M); j++){
    //         cout<<d[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
   cout<<d[n][k]<<endl;
}
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
        cin.tie(0);
        ios_base::sync_with_stdio(false);


    build();    

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