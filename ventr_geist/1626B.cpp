#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    int n=(int) s.size();
    //first check if any make sum greater than 9
    for(int i=n-1; i>=1; i--){
        int p=s[i]-'0';
        int q=s[i-1]-'0';
        if(p+q>9){
            //cout<<"case 1"<<endl;
            if(i-2>=0){
              string s1=s.substr(0,i-1);
              cout<<s1;
            }
            cout<<p+q;
            if(i+1<n){
                string s2=s.substr(i+1);
                cout<<s2;
            }
            cout<<endl;
            return;

        }
    }
    
    int p=s[0]-'0';
    int q=s[1]-'0';
    cout<<p+q;
    if(2<n){
        string s1=s.substr(2);
        cout<<s1;
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