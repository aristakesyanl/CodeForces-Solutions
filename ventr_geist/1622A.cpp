    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    const int inf = 2e9 + 100;
    const int mod = 1e9 + 7;
    const int N = 50000 + 10;

     
    void solve(){
        int a, b, c;
        cin>>a>>b>>c;
        int s=a+b+c;
        if(s&1){
            //cout<<1<<endl;
            cout<<"NO"<<endl;
            return;
        }
        if(a==b+c || b==a+c || c==a+b){
            //cout<<2<<endl;
            cout<<"YES"<<endl;
            return;
        }
        if((a%2==0 && b==c) || (b%2==0 && a==c) || (c%2==0 && a==b)){
            //cout<<3<<endl;
            cout<<"YES"<<endl;
            return;
        }
        //cout<<4<<endl;
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
        while (t--) {
          solve();
        }
        //solve();
        return 0;
    }