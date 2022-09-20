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

void solve(){

    int n,k;
    cin>>n>>k;
    int x=n*k;
    int y=(x+1)/2;
    if(n==1 && k==1){
        //cout<<"case 1"<<endl;
        cout<<"YES"<<endl;
        cout<<1<<endl;
        return;
    }
    else if(k==1){
        //cout<<"case 2"<<endl;
        cout<<"YES"<<endl;
        for(int i=1; i<=n;i++){
            cout<<i<<endl;
        }
        return;
    }
    else if(n==1 && k>1){
        //cout<<"case 3"<<endl;
        cout<<"NO"<<endl;
        return;
    }
    else if(y%k!=0){
        //cout<<"case 4"<<endl;
        cout<<"NO"<<endl;
        return;
    }
    else{
        //cout<<"case 5"<<endl;
        cout<<"YES"<<endl;
        for(int i=0; i<(n+1)/2;i++){
            int p=k;
            int q=i*2*k+1;
            while(p){
                cout<<q<<" ";
                q+=2;
                p--;
            }
            cout<<endl;
        }

        for(int i=0; i<n/2;i++){
            int p=k;
            int q=i*2*k+2;
            while(p){
                cout<<q<<" ";
                q+=2;
                p--;
            }
            cout<<endl;
        }
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