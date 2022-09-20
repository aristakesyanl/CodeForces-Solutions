#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
#define sz(x) ((int)(x).size())
#define yes cout<<"YES"<<endl; return;
#define no  cout<<"NO"<<endl; return;
typedef long long ll;
//---------------------------------------------- 
const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 200000 + 10;
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


void solve(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(string &x:str) cin>>x;
    set<string> s;
    for(string x: str){
        string y=x;
        int k=sz(x);
        // a aa
        if(k==1 || (k==2 && x[0]==x[1])){
            cout<<"YES"<<endl;
            return;
        }
        s.insert(x);
        reverse(x.begin(),x.end());
        //abc-cba ab-ba
        if(s.find(x)!=s.end()){
            cout<<"YES"<<endl;
            return;
        }
        //ab-cba 
        if(s.find(x.substr(0,k-1))!=s.end()){
            cout<<"YES"<<endl;
            return;
        }
        //abc-ba
        for(char i='a'; i<='z'; i++){
            if(s.find(x+i)!=s.end()){
                cout<<"YES"<<endl;
                return;
            }
        }
    }

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