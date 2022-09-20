#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const int inf = 2e9 + 100;
const int mod = 1e9 + 7;
const int N = 200000 + 10;
int p[N];
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
void solve(){
    vector<pair<int, int>> v1;
    vector<pair<int, int>> v2;

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            cnt++;
            v1.push_back(make_pair(i+1, p[i]));
        }
        else{
            v2.push_back(make_pair(i+1, p[i]));
        }
    }
    int k=1;

    sort(v1.begin(), v1.end(), sortbysec);
    for(auto& u: v1){
        u.second=k;
        k++;
    }
    
    k=cnt+1;
    sort(v2.begin(), v2.end(), sortbysec);
    for(auto& u: v2){
        u.second=k;
        k++;
    }


   v1.insert( v1.end(), v2.begin(), v2.end());
   sort(v1.begin(), v1.end());
   for(auto u: v1){
    cout<<u.second<<" ";
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
    while (t--) {
      solve();
    }
    //solve();
    return 0;
}