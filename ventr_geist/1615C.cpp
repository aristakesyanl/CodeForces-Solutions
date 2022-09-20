#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;

void solve(){
    int n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
        return;
    }

    int ca=0;
    int cb=0;
    int dif=0;
    bool flag=true;
    for(int i=0; i<n; i++){
        if(a[i]=='1') ca++;
        if(b[i]=='1') cb++;
        if(a[i]!=b[i]){
            dif++;
        } 
    }
    for(int i=0; i<n; i++){
        if(a[i]=='1'){
            flag=false;
        }
    }

    if(flag){
        cout<<-1<<endl;
        return;
    }

    int ans=INT_MAX;

    
    if(ca==cb){
        ans=dif;
    }
    int nw;
    int dif1;
    for(int i=0; i<n;i++){
        if(a[i]=='1') {
            nw=n-ca+1; //new number of ones
        //after changeing candles count the number of different pairs
        if(a[i]==b[i]) dif1=n-dif-1;
        else dif1=n-dif+1;
        if(nw==cb){
            ans=min(ans,dif1+1);
        }
      }
    }
    if(ans==INT_MAX){
        cout<<-1<<endl;
        return;      
    }
    cout<<ans<<endl;

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