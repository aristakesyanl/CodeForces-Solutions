#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int inf = 2e9 + 100;
const int mod = 998244353;
const int N = 50+10;


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int d=b-a;
    int q=b+d;
    if(q%c==0 && q>=c){
        //cout<<"case 1"<<endl;
        cout<<"YES"<<endl;
        return;
    }
    d=c-b;
    q=b-d;
    if(q%a==0 && q>=a){
        //cout<<"q="<<q<<endl;
        //cout<<"case 2"<<endl;
        cout<<"YES"<<endl;
        return;
    }

    if((c-a)%2==0){
        d=(c-a)/2;
        q=a+d;
        if(q%b==0 && q>=b){
            //cout<<"case 3"<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }

    //cout<<"case 4"<<endl;
    cout<<"NO"<<endl;
}


int main(){
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