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
const int N = 200000;
const int K=20;
//----------------------------------------------
int arr[N];
int lg[N+1];
int st[N][K+1];
int b[N];


//----------------------------------------------
//Sparse table for gcd
void build(){
    lg[1] = 0;
    for (int i = 2; i <= N; i++)
        lg[i] = lg[i/2] + 1;
 
    for(int i=0; i<N; i++){
        st[i][0]=arr[i];
    }
 
    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) < N; i++)
            st[i][j] = __gcd(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);
}


//----------------------------------------------

void solve(){
    int n;
    cin>>n;
    in(arr,n);
    build();

    for(int i=0; i<n; i++){
        int l=0;
        int r=n-i;
        //int cnt=100;
        while(l<=r){
            int m=l+(r-l)/2;
            if(i+m-1>=n) continue;
            else{

            }
            int L=i;
            int R=i+m-1;
            int q = lg[R - L + 1];
            int x=__gcd(st[L][q], st[R - (1 << q) + 1][q]);
            // cout<<"x="<<x<<endl;
            // cout<<"m="<<m<<endl;
            if(x==m){
                b[i]=i+m-1;
                break;
            }
            if(x>m) l=m+1;
            if(x<m) r=m-1;
        }
        //cout<<endl;
    }

    // for(int i=0; i<n; i++){
    //     if(arr[i]==1)b[i]=i;
    // }

    // for(int i=0; i<n; i++)
    //     cout<<b[i]<<" ";
    // cout<<endl;
    int prev=-1;
    vector<bool> v(n,false);
    for(int i=0; i<n; i++){
        if(b[i]>0 && prev<i){
            v[b[i]]=true;
            prev=b[i];
        } 
    }

    // for(int i=0; i<n; i++)
    //     cout<<v[i]<<" ";
    // cout<<endl;

    int ans=0;

    if(arr[0]==1) ans++;

    for(int i=0; i<n; i++){
        if(v[i])ans++;
        cout<<ans<<" ";
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

    build();
     
    // int t;
    // cin >> t;
    // int t1=t;
    // while (t--) {
    //   //cout<<t1-t<<": ";
    //   solve();
    // }
    solve();
    return 0;
}