#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 100 + 10;

void solve(){
    int l,r,k;
    cin>>l>>r>>k;
    int cnt_2=0;
    int cnt_3=0;
    if(l==r && l==1){
        //cout<<"case 1"<<endl;
        cout<<"NO"<<endl;
        return;
    }

    if(l==r && l!=1){
        //cout<<"case 2"<<endl;
        cout<<"YES"<<endl;
        return;
    }

    cnt_2=r/2-l/2;
    if(l%2==0) cnt_2++;
    cnt_3=r/3-l/3;
    if(l%3==0) cnt_3++;
    //cout<<"cnt_2="<<cnt_2<<" cnt_3="<<cnt_3<<endl;
    int s=r-l+1;
    //cout<<"s="<<s<<endl;

    if(r-l+1-cnt_2<=k){
        //cout<<"case 3"<<endl;
        cout<<"YES"<<endl;
        return;
    }
    if(r-l+1-cnt_3<=k){
        //cout<<"case 4"<<endl;
        cout<<"YES"<<endl;
        return;
    }

    //cout<<"case 5"<<endl;
    cout<<"NO"<<endl;
    
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