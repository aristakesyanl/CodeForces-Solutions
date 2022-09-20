#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
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
 
//----------------------------------------------
const ll inf = 2e18 + 100;
const int mod = 998244353;
const int N = 100000+10;
//----------------------------------------------

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n%2 != 0)
            return 0;
        n = n/2;
    }
    return 1;
}
int highestPowerof2(int n)
{
    int res = 0;
    for (int i=n; i>=1; i--)
    {
        // If i is a power of 2
        if ((i & (i-1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}
void solve(){
    int n;
    cin>>n;
    int k=n;
    // if(isPowerOfTwo(k-1)){
    //     for(int i=0; i<n; i++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //     return;
    // }
    int p=highestPowerof2(n-1);
    for(int i=1; i<p; i++){
        cout<<i<<" ";
    }
    cout<<0<<" "<<p<<" ";
    for(int i=p+1; i<n; i++){
        cout<<i<<" ";
    }
    cout<<endl;

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