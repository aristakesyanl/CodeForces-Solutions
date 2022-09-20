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
int a[N];


//----------------------------------------------

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> first(n+1,-1);
    vector<int> last(n+1,-1);
    vector<bool> check(n+1,false);

    for(int i=0; i<n; i++){
        if(first[a[i]]==-1){
            first[a[i]]=i;
            check[i]=true;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(last[a[i]]==-1) last[a[i]]=i;
    }

    vector<pair<int,int>> pa;

    for(int i=0; i<n; i++){
        if(first[a[i]]==-1){
            continue;
        }
        else if(first[a[i]]==last[a[i]]){
            continue;

        }
        else if(first[a[i]]+1==last[a[i]]){
            continue;
        }
        else if(!check[i]){
            continue;
        }
        else if(sz(pa)==0){
            pa.push_back(make_pair(first[a[i]],last[a[i]]));
            continue;
        }
        else if(sz(pa)==1){
            if(pa[sz(pa)-1].first<=first[a[i]] && pa[sz(pa)-1].second>=last[a[i]]){
                    continue;
            }
            else{
                pa.push_back(make_pair(first[a[i]],last[a[i]]));
                continue;
            }

        }
        else{
           
            if(pa[sz(pa)-1].first<=first[a[i]] && pa[sz(pa)-1].second>=last[a[i]]){
                continue;
            }

    
            if(pa[sz(pa)-2].second>=first[a[i]]){
                if(pa[sz(pa)-1].second<last[a[i]]){
                    pa.pop_back();
                    pa.push_back(make_pair(first[a[i]],last[a[i]]));
                    continue;
                }
                else{
                    continue;
                }
            }
            else{
                pa.push_back(make_pair(first[a[i]],last[a[i]]));
            }
        }
    }

    if(sz(pa)==0){
        cout<<0<<endl;
        return;
    }

    int ans=pa[0].second-pa[0].first-1;
    for(int i=1; i<sz(pa);i++){
        if(pa[i].first<pa[i-1].second){
            ans+=pa[i].second-pa[i-1].second-1;
        }
        else{
            ans+=pa[i].second-pa[i].first-1;
        }
    }
    cout<<ans<<endl;
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