#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 50 + 10;
char arr[N][N];
void solve(){
    int n, m,r,c;
    cin>>n>>m>>r>>c;
    r--;
    c--;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    bool flag=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]=='B') flag=false;
        }
    }

    if(flag){
        cout<<-1<<endl;
        return;
    }
    if(arr[r][c]=='B'){
        cout<<0<<endl;
        return;
    }
    for(int i=0; i<m; i++){
        if(arr[r][i]=='B'){
            cout<<1<<endl;
            return;
        }
    }
     for(int i=0; i<n; i++){
        if(arr[i][c]=='B'){
            cout<<1<<endl;
            return;
        }
    }

    cout<<2<<endl;

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
    int t1=t;
    while (t--) {
      //cout<<t1-t<<": ";
      solve();
    }
    //solve();
    return 0;
}