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
const int N = 100000+10;

//----------------------------------------------

int arr[N];



void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool flag=true;

    if(n==3 && (arr[1]&1)){
        cout<<-1<<endl;
        return;
    }

    for(int i=1; i<n-1; i++){
        if(arr[i]!=1) flag=false;
    }

    if(flag){
        cout<<-1<<endl;
        return;
    }
    else{
        ll sum=0;
        for(int i=1; i<n-1; i++){
            sum+=(arr[i]+1)/2;
        }
        cout<<sum<<endl;
        return;
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