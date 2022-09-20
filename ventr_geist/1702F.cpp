#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const ll mod = 1e9+7;
const int N = 200000+10;
const int K=20;
 
//----------------------------------------------

void solve(){

    int n;
    cin>>n;
    map<int, int> a;
    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        a[x]++;
    }

    map<int, int> b;
    for(int i=0; i<n; i++){
        cin>>x;
        b[x]++;
    }

    for(auto &u: a){
        if(b.count(u.first)){
            int y=u.second;
            u.second-=min(y,b[u.first]);
            b[u.first]-=min(y,b[u.first]);
        }
    }

    multiset<int> s;
    for(auto &u:a){
        int p=u.first;
        while((p&1)==0){
            p/=2;
        }
        for(int j=0; j<u.second;j++){
            s.insert(p);
        }
    }

    // for(auto u: s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    for(auto &u:b){
        for(int i=0; i<u.second;i++){
            int p=u.first;
            bool flag=true;
            while(p>0){
                if(s.find(p)!=s.end()){
                    s.erase(s.lower_bound(p));
                    flag=false;
                    break;
                }
                else{
                    p/=2;
                }
            }
            if(flag){
                cout<<"NO"<<endl;
                return;
            }
            
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
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    //solve();
    return 0;
}