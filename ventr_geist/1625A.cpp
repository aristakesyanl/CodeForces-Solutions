#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 100 + 10;
const int K=100+10;
int arr[N];
int cnt[40];

void solve(){
    int n, l;
    cin>>n>>l;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        //cout<<arr[i]<<" ";
    }
    for(int i=0; i<40; i++){
        cnt[i]=0;
    }

    for(int i=0; i<n; i++){
        for(int j=31; j>=0; j--){
            int k=arr[i]>>j;
            if(k&1) cnt[j]++;
        }
    }

    // for(int i=0; i<40; i++){
    //     cout<<cnt[i]<<" ";
    // }
    // cout<<endl;

    int ans=0;

    for(int i=0; i<40; i++){
        if(n<2*cnt[i]){
            ans+=(1<<i);
        }
    }

    cout<<ans<<endl;

}


int main(){
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