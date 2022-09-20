#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
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
const int N = 10000+10;

//----------------------------------------------
int p[N];

//----------------------------------------------
int ask(int i){
    cout<<"? "<<i<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;
}
void solve(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        p[i]=-1;

    for(int i=1; i<=n; i++){
        if(p[i]==-1){
            int fst=ask(i);
            int prv=fst;
            while(1){
                int now=ask(i);
                p[prv]=now;
                prv=now;
                if(now==fst)
                    break;
            }
        }
    }

    cout<<"! ";
    for(int i=1; i<=n; i++)
        cout<<p[i]<<" ";
    cout<<endl;
    cout.flush();


}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
     
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