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
const int N = 100+10;
//----------------------------------------------

int a[N];
int b[N];

void solve(){
    int n;
    cin>>n;
    in(a,n);
    in(b,n);
    int mx1=INT_MIN;
    int mx2=INT_MIN;
    //a-small numbers
    for(int i=0; i<n; i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
    }

    for(int i=0; i<n; i++){
        mx1=max(mx1,a[i]);
        mx2=max(mx2,b[i]);
    }
    cout<<mx1*mx2<<endl;
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