#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 50+10;
int arr[N];
bool used[N];


void solve(){
    int n;
    cin>>n;
    vector<bool> used(n+1,false);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        while(arr[i]>0){
            if(arr[i]<=n && used[arr[i]]==false){
                used[arr[i]]=true;
                break;
            }
            else{
                arr[i]/=2;
            }
        }
    }
    for(int i=1; i<=n; i++){
        if(used[i]==false){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;


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