#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 500000 + 10;
/*int link[N];
int size[N];
int cnt[N];
template <typename T>
T find(T x) {
    if (x!=link[x]) x=link[x];
    return x;
}

template <typename T>
bool same(T a, T b){
    return find(a)==find(b);
}

template <typename T>
void unite(T a, T b){
    a=find(a);
    b=find(b);
    if(size[a]<size[b]) swap(a,b);
    size[a]+=size[b];
    link[b]=a;
}

void solve(){
    for(int i=0; i<N; i++){
        link[i]=i;
        size[i]=1;
        cnt[i]=0;
    }
    map<int, int> m1;
    map<int, int> m2;
    int q;
    int num;
    int index=0;
    cin>>q;
    while(q--){
        cin>>num;
        if(num==1){
            int x;
            cin>>x;
            if(cnt[x]==0){
                m1[x]=index;
                index++;
                cnt[x]++;
            }
            else{
                int d=m1[x];
                link[index]=d;
                size[d]++;
                m1[x]=find(d);
                index++;
                cnt[x]++;
            }     
            
        }
        else{
            int x, y;
            cin>>x>>y;
            if(cnt[x]==0 || x==y) continue;
            else{

                int d=m1[x];
                m1[y]=d;
                m1.erase(x);
                cnt[y]+=cnt[x];
                cnt[x]=0;
            }
        }

    }
    // cout<<"Index="<<index<<endl;

    for(auto u: m1){
        m2[u.second]=u.first;

    }
    for(int i=0; i<10; i++){
        cout<<cnt[i]<<" ";
    }
    cout<<endl;
    // for(int i=0; i<10; i++){
    //     cout<<link[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<10; i++){
    //     cout<<size[i]<<" ";
    // }
    // cout<<endl;
    // for(auto u:m1){
    //     cout<<u.first<<" "<<u.second<<endl;
    // }
    cout<<endl;
    for(auto u:m2){
        cout<<u.first<<" "<<u.second<<endl;
    }
    cout<<endl;
    for(int i=0; i<index; i++){
        int d=find(i);
        cout<<m2[d]<<" ";
    }
    cout<<endl;

}*/

void solve(){
    int q;
    cin>>q;
    vector<int> p(N), x(q), y(q), t(q);
    iota(p.begin(), p.end(), 0);
    vector<int> ans;
    for(int i=0; i<q; i++){
        cin>>t[i];
        if(t[i]==1){
            cin>>x[i];
        }
        else{
            cin>>x[i]>>y[i];

        }
    }
   
    for(int i=q-1; i>=0; i--){
        if(t[i]==1){
            ans.push_back(p[x[i]]);

        }
        else{
            p[x[i]]=p[y[i]];
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto u: ans){
        cout<<u<<" ";
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
  
    // int t;
    // cin >> t;
    // while (t--) {
    //   solve();
    // }
    solve();
    return 0;
}