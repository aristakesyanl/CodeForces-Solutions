#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;
const int K=20;
 
//----------------------------------------------
vector<int> lg(N);
//----------------------------------------------
class SparseTable{
public:
    int n, m;
    vector<vector<ll>> st;
    void init(vector<ll>& a){
        n=sz(a);
        m=lg[sz(a)]+1;
        st.resize(n, vector<ll> (m,0));
        for(int i=0; i<n; i++){
            st[i][0]=a[i];
        }
 
        for(int j=1; j<m; j++){
            for(int i=0;i+(1<<j)<=n; i++){
                st[i][j]=max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
            }
        }
    }
    void print(){
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                cout<<st[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    ll query(int L, int R){
        int j=lg[R-L+1];
        ll mx=max(st[L][j],st[R-(1<<j)+1][j]);
        return mx;
    }
};
 
void build(){
    lg[1]=0;
    for(int i=2; i<N; i++){
        lg[i]=lg[i/2]+1;
    }
}
 
void solve(){
    int n;
    cin>>n;
    vector<ll> a(n+1);
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
 
    vector<ll> p(n+2,0);
    vector<ll> suf(n+2,0);
    for(int i=1; i<=n; i++){
        p[i]=p[i-1]+a[i];
    }
 
    for(int i=n;i>=1; i--){
        suf[i]=suf[i+1]+a[i];
    }
    
    //construct sparse table for prefix sums
    SparseTable s, s1;
    s.init(p);
    s1.init(suf);

    //construct an array for next greater element
    vector<int> right(n+1);
    stack<int> stck;
    for(int i=n; i>=1; i--){
        while(!stck.empty() && a[stck.top()]<=a[i]){
            stck.pop();
            
        }
        if(stck.empty()){
            right[i]=n+1;
            stck.push(i);
        }
        else{
            right[i]=stck.top();
            stck.push(i);
        }
    }
 
    //construct an array for previous greater element
    vector<int> left(n+1);
    while(!stck.empty()){
        stck.pop();
    }
    for(int i=1; i<=n; i++){
        while(!stck.empty() && a[stck.top()]<=a[i]){
            stck.pop();
        }
        if(stck.empty()){
            left[i]=0;
            stck.push(i);
        }
        else{
            left[i]=stck.top();
            stck.push(i);
        }
    }
 
    for(int i=1; i<=n;i++){
        int L=i;
        int R=right[i]-1;
        ll mx=s.query(L,R);
        ll x=mx-p[i-1];
        if(x>a[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
 
   
    for(int i=1; i<=n;i++){
        int L=left[i]+1;
        int R=i;
        ll mx=s1.query(L,R);
        ll x=mx-suf[i+1];
        if(x>a[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
 
    cout<<"YES"<<endl;
}
 
int main(int argc, char *argv[]){
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
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