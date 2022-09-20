    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 100 + 10;
     
     
    void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1;
        s1+=s[0];
        if(s[0]==s[1]){
            cout<<s[0]<<s[1]<<endl;
            return;
        }
        for(int i=1; i<n; i++){
            if(s[i]<=s[i-1]) s1+=s[i];
            else break;
        }
        string s2=s1;
        reverse(s2.begin(), s2.end());
        cout<<s1+s2<<endl;
        
    }
         
    int main() {
        // #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
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