#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------

const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;
 
//----------------------------------------------

bool vis[N]={false};
vector<int> adj[N];
set<pair<int,int>> s;
vector<int> Euler;
int size=0;
int lim,b;
 
//----------------------------------------------
 
void eulerTree(int u)
{
    vis[u] = true;
    Euler.push_back(u);
    for (auto it : adj[u]) {
        if (!vis[it]) {
            eulerTree(it);

        Euler.push_back(u);
    }
    }
}
 
void solve(){
   int n, m, k;
   cin>>n>>m>>k;
   int u,v;
   for(int i=0; i<m; i++){
    cin>>u>>v;
    if(u==v) continue;
    else{
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   }

   lim=(2*n+k-2)/k;
   
   eulerTree(1);
   int size=Euler.size();

   //cout<<Euler.size()<<endl;

   // for(int i=0; i<size;i++){
   //  cout<<Euler[i]<<" ";
   // }
   // cout<<endl;

   for(int i=1; i<=k; i++){
    if(size-i*lim<(k-i)){
        if(i==k){
            cout<<size-(k-1)*lim<<" ";
            for(int j=(i-1)*lim; j<size;j++){
                cout<<Euler[j]<<" ";
            }
            cout<<endl;
            break;
        }
        else{
            cout<<size-(i-1)*lim-(k-i)<<" ";
            for(int j=(i-1)*lim; j<(i-1)*lim+size-(i-1)*lim-(k-i);j++){
                cout<<Euler[j]<<" ";
            }
            cout<<endl;
            for(int j=0; j<k-i;j++){
                cout<<1<<" ";
                cout<<Euler[size-1-j]<<endl;
            }
            break;
        } 
 
    }
    else{
        cout<<lim<<" ";
        for(int j=0; j<lim;j++){
            cout<<Euler[(i-1)*lim+j]<<" ";
        }
        cout<<endl;
    }
   }


}
 
int main(int argc, char *argv[]){

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