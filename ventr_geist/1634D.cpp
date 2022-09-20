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
const int N = 100+10;
 
//----------------------------------------------
 


int ask(int i, int j, int k){
    i++;
    j++;
    k++;
    cout<<"?"<<" "<<i<<" "<<j<<" "<<k<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;

} 
 
void solve(){
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=2; i<n; i++){
        int q=ask(0,1,i);
        v.emplace_back(q,i);
    }
    sort(v.rbegin(), v.rend());
    int mx=INT_MIN;
    int ind=-1;

    for(int i=1; i<sz(v);i++){
        int q=ask(0,v[0].second, v[i].second);
        if(q>mx){
            mx=q;
            ind=v[i].second;
        }
    }
    if(mx>v[0].first){
            // 1,2 contain neither 0 nor the max element
            //v[0].second should be index of either the max element or 0
            //check it with all possible values to find the biggest
            cout<<"! "<<v[0].second+1<<" "<<ind+1<<endl;
            cout.flush();
            return;
        }

    // There remain three possiblities
    // 1,2 indices contain both 0 and max
    // 1,2 indices contain 0
    // 1,2 indices contain max

   
    int a=ask(0, v[0].second, v.back().second);
    int b=ask(1, v[0].second, v.back().second);

    if(a<=v[0].first && b<=v[0].first && v[0].first==v.back().first){
        cout<<"! 1 2"<<endl;
        cout.flush();
        return;
    }
    else if(a>b){
        cout<<"! "<<1<<" "<<v[0].second+1<<endl;
        cout.flush();
        return;
    }
    else{
        cout<<"! "<<2<<" "<<v[0].second+1<<endl;
        cout.flush();
        return;

    }
    
}
 
int main(int argc, char *argv[]) {
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

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