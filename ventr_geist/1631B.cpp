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
    const int N = 200000+10;
    //----------------------------------------------
     
    int arr[N];
     
     
    void solve(){
        int n;
        cin>>n;
        in(arr,n);
        bool flag=true;
        for(int i=1; i<n; i++){
            if(arr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
        if(n==1){
            cout<<0<<endl;
            return;
        }
        if(flag){
            cout<<0<<endl;
            return;
        }
        // int k=1;
        // for(int i=n-2; i>=0; i--){
        //     if(arr[i]==arr[n-1])k++;
        //     else break;
        // }
        // cout<<"k="<<k<<endl;
     
        int ans=0;
        int i=n-1;
        int k=0;
     
        while(i>=0){
            if(arr[i]!=arr[n-1]){
                // cout<<arr[i]<<" "<<arr[n-1]<<endl;
                // cout<<"i="<<i+1;
                ans++;
                i=n-2*k-1;
                // cout<<" i="<<i+1<<endl;
                // cout<<"ans="<<ans;
                // cout<<" k="<<k;
                k*=2;
                // cout<<" k="<<k<<endl;
                // cout<<endl;
            }
            else {
                i--;
                k++;
                // cout<<"i="<<i+1<<" k="<<k<<endl;
                // cout<<endl;
            }
        }
        cout<<ans<<endl;
       
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