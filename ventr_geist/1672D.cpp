#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------

const int inf = 2e9;
const int mod = 998244353;
const int N = 200000+10;
 
//----------------------------------------------
int a[N];
int b[N];
//----------------------------------------------

void solve(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    if(a[n-1]!=b[n-1]){
        cout<<"NO"<<endl;
        return;
    }

    vector<int> cnt(n+1);
  

    int i=n-1;
    int j=n-1;
    while(j>=0){
        if(a[i]==b[j]){
            i--;
            j--;
        }
        else if(b[j]==b[j+1] && a[i]!=b[j]){
            cnt[b[j]]++;
            j--;

        }
        else if(b[j]!=b[j+1] && a[i]!=b[j]){
            if(cnt[a[i]]>0){
                cnt[a[i]]--;
                i--;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    if(i<0){
        cout<<"YES"<<endl;
        return;
    }
    else{
        for(int k=0; k<=i;k++){
            if(cnt[a[k]]>0)cnt[a[k]]--;
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    
}
 
int main(int argc, char *argv[]){

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