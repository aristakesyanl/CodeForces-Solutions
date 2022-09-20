#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 200000 + 10;
void solve(){
    int n, k;
    cin>>n>>k;
    if(n<2*k-1){
        cout<<-1<<endl;
        return;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && i%2==0 && k>0){
                cout<<"R";
                k--;
            }
            else {
                cout<<".";
            }
        }
        cout<<endl;
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
    while (t--) {
      solve();
    }
    //solve();
    return 0;
}