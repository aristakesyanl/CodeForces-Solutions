#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200 + 10;
int cnt[2][N];
double arr[80];


void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n==1 || n==2){
        cout<<0<<endl;
        return;
    }
    int ans=INT_MIN;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int cnt=0;
            double x=double((arr[j]-arr[i])/(j-i));
            //cout<<"x="<<x<<endl;
            for(int k=i+1; k<j; k++){
                //cout<<(arr[i]+(k-i)*x)<<endl;
                if(abs((arr[i]+(k-i)*x)-arr[k])<=0.00001) cnt++;
            }
            cnt+=2;
            //cout<<"cnt="<<cnt<<endl;
            ans=max(ans, cnt);
        }
    }
    cout<<n-ans<<endl;
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