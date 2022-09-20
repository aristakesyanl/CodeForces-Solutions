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
int link[N];
int siz[N];
int st[N];

//----------------------------------------------
//DSU
int find(int x) {
    while (x != link[x]) x = link[x];
    return x;
}


bool same(int a,int b){
    return find(a)==find(b);
}

void unite(int a, int b) {
    if(find(a)==find(b)) return;
    else{
        a = find(a);
        b = find(b);
        if (siz[a] < siz[b]) swap(a,b);
        siz[a] += siz[b];
        link[b] = a;
    }
}


//----------------------------------------------


void solve(){
    int n,d;
    cin>>n>>d;
    for (int i = 1; i <= n; i++) link[i] = i;
    for (int i = 1; i <= n; i++) siz[i] = 1;

    
    int u,v;
    int cnt=1;
    int mx;
    for(int i=0; i<d; i++){
        cin>>u>>v;
        if(find(u)!=find(v)) unite(u,v);
        else{
          cnt++;
        }

        //cout<<"cnt="<<cnt<<endl;
        for(int i=1;i<=n; i++){
            st[i]=0;
        }

        for(int i=1; i<=n; i++){
            int k=find(i);
            st[k]=siz[k];
        }

        sort(st+1,st+1+n);

        mx=0;

        // for(int i=n; i>0; i--){
        //     cout<<st[i]<<" ";
        // }
        // cout<<endl;

        for(int i=n; i>n-cnt; i--){
            mx+=st[i];
        }
        cout<<mx-1<<endl;
        
    }

    // for(int i=1; i<=n; i++)
    //     cout<<size[i]<<" ";
    // cout<<endl;

    // for(int i=1; i<=n; i++)
    //     cout<<link[i]<<" ";
    // cout<<endl;

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
    // int t1=t;
    // while (t--) {
    //   //cout<<t1-t<<": ";
    //   solve();
    // }
    solve();
    return 0;
}