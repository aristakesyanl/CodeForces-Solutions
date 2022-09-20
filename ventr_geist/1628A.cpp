#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
//---------------------------------------------- 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 200000 + 10;
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
//----------------------------------------------
int arr[N];
vector<int> g[N];

void solve(){
   int n;
   cin>>n;
   in(arr,n);
   vector<int> b;
   for(int i=0; i<n; i++){
     g[arr[i]].push_back(i);
   }

   // for(int i=0; i<=n; i++){
   //  for(auto x: g[i]){
   //      cout<<x<<" ";
   //  }
   //  cout<<endl;
   // }

   int l,r;
   int it=0;
   int x=0;

   while(it<n){
    int x=0;
    l=it;
    r=it;
    while(1){
        int ind=lower_bound(g[x].begin(),g[x].end(),l)-g[x].begin();
        if(ind==sz(g[x])) break;
        r=max(r,g[x][ind]);
        x++;
    }
    it=r+1;
    b.push_back(x);

   }

   cout<<sz(b)<<endl;
   for(auto x: b){
    cout<<x<<" ";
   }
   cout<<endl;

   for(int i=0; i<=n; i++){
    g[i].clear();
   }
}
 
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
        cin.tie(0);
        ios_base::sync_with_stdio(false);
     
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