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
const int N = 10000+10;

//----------------------------------------------

int arr[N];
int b[N];


void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ll sum=0;
    for(int i=0; i<n;i++){
        for(int j=i; j<n; j++){
            //cout<<"i="<<i<<" j="<<j<<endl;
            //int nw=j-i+1;
            sum+=(j-i+1);
            for(int k=i; k<=j; k++){
                if(arr[k]==0){
                    sum++;
                    //nw++;
                }
            }
            //cout<<"nw="<<nw<<endl;

        }
    }

    cout<<sum<<endl;
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