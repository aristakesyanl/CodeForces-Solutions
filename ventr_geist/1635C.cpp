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
const int N = 200000+10;
 
//----------------------------------------------
 
int arr[N];
void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
 
    bool flag=true;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]) flag=false;
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
 
    if(arr[n-2]>arr[n-1]){
        cout<<-1<<endl;
        return;
    }

    if((arr[n-2]-arr[n-1])>arr[n-2]){
        cout<<-1<<endl;
        return;
    }
 
    cout<<n-2<<endl;
    for(int i=0; i<n-2; i++){
        cout<<i+1<<" "<<n-1<<" "<<n<<endl;
    }
}
 
int main(int argc, char *argv[]) {
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