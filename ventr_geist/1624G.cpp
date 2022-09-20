#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
#define yes cout<<"YES"<<endl; return;
#define no  cout<<"NO"<<endl; return;
typedef long long ll;
 
//----------------------------------------------
const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;
 
//----------------------------------------------
 
int a[N];
int b[N];
int c[N];

class DSU{
public:
    vector<int> f;
    vector<int> sz;
    int size;
    void init(int n){
        f.resize(n+1);
        sz.resize(n+1);
        for(int i=1; i<=n; i++){
            sz[i]=1;
            f[i]=i;
        }
        size=n;
    }

    inline int find(int x){
        return f[x]==x?x:find(f[x]);
    }

    void unite(int x, int y){
        if(find(x)==find(y)) return;
        else{
            x=find(x);
            y=find(y);
            if(sz[x]<sz[y]) swap(x,y);
            sz[x]+=sz[y];
            f[y]=x;
            size--;
        }
    }

    inline bool same(int x, int y){
        return find(x)==find(y)?true:false;

    }

};

void solve(){
   int n, m;
   cin>>n>>m;
   for(int i=1; i<=m; i++)
    cin>>a[i]>>b[i]>>c[i];

   int ans=0;
   int mask=0;

   for(int i=30; i>=0; i--){
    DSU s;
    s.init(n);
    mask|=(1<<i);
    for(int i=1; i<=m; i++){
        if(!(mask&c[i])){
            s.unite(a[i], b[i]);
        }
    }

    if(s.size>1){
        ans|=1<<i;
        mask^=1<<i;
    }

   }

   cout<<ans<<endl;
}
 
int main(int argc, char *argv[]) {
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