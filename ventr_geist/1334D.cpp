#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
 
const int inf = 2e9;
const ll mod = 1e9+7;
const int N = 200000+10;
const int K=20;
vector<int> d[N];

//----------------------------------------------

// 1 2 1 3 1 4 1 5
// 2 3 2 4 2 5
// 3 4 3 5
// 4 5
// 1

// 1 2 1 3 2 3 1

// 1 2 1 3
// 2 3
// 1
 
 
void solve(){
    ll n,l,r;
    cin>>n>>l>>r;
    if(n==2){
        string s="121";
        for(int i=l-1; i<=r-1;i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }

    else{
        ll row1=1;
        ll s1=0;
        for(ll i=1; i<=n-1; i++){
            if(s1+2*(n-i)<l){
                s1+=2*(n-i);
                row1++;
            }
            else break;
        }

        ll col1=l-2*1ll*(row1-1)*n+1ll*(row1-1)*row1;

        ll row2=1;
        ll s2=0;
        for(ll i=1; i<=n-1; i++){
            if(s2+2*(n-i)<r){
                s2+=2*(n-i);
                row2++;
            }
            else break;
        }

        ll col2=r-2*1ll*(row2-1)*n+1ll*(row2-1)*row2;

        
        if(l==r && r==1ll*n*(n-1)+1){
            cout<<1<<endl;
            return;
        }

        if(row2==n){
            row2--;
            col2=2;
        }

        // cout<<"row1="<<row1<<" row2="<<row2<<endl;
        // cout<<"col1="<<col1<<" col2="<<col2<<endl;
    

        if(row1==row2){
            for(int i=col1; i<=col2; i++){
                if(i&1){
                    cout<<row1<<" ";
                }
                else{
                    cout<<row1+i/2<<" ";
                }
            }
        }

        else{

            for(int i=col1; i<=2*(n-row1);i++){
                if(i&1){
                    cout<<row1<<" ";
                }
                else{
                    cout<<row1+i/2<<" ";
                }
            }

            for(int i=row1+1; i<=row2-1; i++){
                for(int j=1; j<=2*(n-i);j++){
                   if(j&1){
                    cout<<i<<" ";
                   }
                   else{
                    cout<<i+j/2<<" ";
                   }
                }
            }


            for(int i=1; i<=col2;i++){
                if(i&1){
                    cout<<row2<<" ";
                }
                else{
                    cout<<row2+i/2<<" ";
                }
            }
        }


    
        if(r==1ll*n*(n-1)+1){
            cout<<1;
        }

        cout<<endl;
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