#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve(){
    vector<int> cnt(26,0);
    string s;
    cin>>s;
    for(int i=0; i<(int) s.size(); i++){
        cnt[s[i]-'a']++;
    }
    for(int i=0; i<26;i++){
        if(cnt[i]==2) cout<<char(i+'a')<<char(i+'a');
    }
    for(int i=0; i<26; i++){
        if(cnt[i]==1) cout<<char(i+'a');
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