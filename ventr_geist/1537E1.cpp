      #include <iostream>
    #include <cmath>
    #include <algorithm>
    #include <vector>
    #include <set>
    #include <unordered_set>
    #include <queue>
    #include <deque>
    #include <string>
    #include <sstream>
    #include <iomanip>
    #include <map>
    #include <unordered_map>
    #include <stack>
    #include <cstdio>
    #include <climits>
    #include <tuple>
    #include <ctime>
    #include <cstring>
    #include <numeric>
    #include <functional>
    #include <chrono>
    #include <cassert>
    #include <bitset>
    using namespace std;
    typedef long long ll;
    typedef pair<int, int> pa;
    const int inf = 2e9 + 100;
    const ll mod = 1e9 + 7;
    const int N = 200000 + 10;
    string repeat(string s, int n)
    { 
        string s1;
        for (int i=1; i<=n;i++)
            s1 += s;
     
        return s1;
    }
    void solve(){
        int n, h;
        cin>>n>>h;
        string s;
        cin>>s;
        string pref;
        pref+=s[0];

        int i=1;

        while(s[i]<s[0] && i<n){
            pref+=s[i];
            i++;
        }

        int len=pref.size();
        int k=0;
        int cnt=0;

        for(int j=i; j<n; j++){
            if(pref[k]==s[j]){
                k++;
                if(k==len){
                    k=0;
                    cnt++;
                }
                
            }
    
            else if(pref[k]>s[j]){
                pref=s.substr(0,j+1);
                k=0;
                len=pref.size();
            }

            else{
                break;
            }
        }

        
        int d=h/(int) pref.size();
        string s1=repeat(pref,d);
        int rem=h%(int) pref.size();
        for(int i=0; i<rem; i++){
            s1+=pref[i];
        }

        cout<<s1<<endl;
    }
    int main() {

        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif

        
        cin.tie(0);
        ios_base::sync_with_stdio(false);
        // int t;
        // cin >> t;
        // while (t--) {
        //     solve();
        // }
        solve();
        return 0;
    }