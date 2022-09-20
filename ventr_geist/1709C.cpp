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
 
//----------------------------------------------
 
 
 
void solve(){
    string s;
    cin>>s;
    int n=sz(s);
    if(n&1){
        cout<<"NO"<<endl;
        return;
    }
    int tot=0;
    string t=s;
    vector<int> a;
    if(s[0]=='?') s[0]='(';
    if(s[n-1]=='?') s[n-1]=')';
    for(int i=0; i<n;i++){
        if(s[i]=='?'){
            tot++;
            a.push_back(i);
 
        }
    }
 
    vector<int> c;
 
    stack<int> st;
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            st.push(i);
        }
        else if(s[i]==')'){
            if(!st.empty()){
                st.pop();
            }
            else{
                c.push_back(i);
            }
 
        }
    }
 
    while(!st.empty()){
        int x=st.top();
        if(sz(a)==0 || x>a.back()){
            cout<<"NO"<<endl;
            return;
        }
        else{
            tot--;
            st.pop();
            s[a.back()]=')';
            a.pop_back();
        }
    }
 
    //cout<<s<<endl;
 
    stack<int> b;
    for(int i=n-1; i>=0;i--){
        if(s[i]=='?') b.push(i);
    }
 
    for(int i=0; i<sz(c);i++){
        if(b.empty() || b.top()>c[i]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            tot--;
            s[b.top()]='(';
            b.pop();
        }
    }


    if(tot&1==1){
        cout<<"NO"<<endl;
        return;
    }
    
    bool flag=true;
    for(int i=0; i<n; i++){
        if(s[i]=='?' && flag){
            s[i]='(';
            flag=false;
        }
        else if(s[i]=='?' && !flag){
            s[i]=')';
            flag=true;
        }
    }
 
    //cout<<s<<endl;

    int l=-1, r=-1;;
 
    for(int i=0; i<n; i++){
        if(s[i]==')' && t[i]=='?'){
            l=i;
            break;
        }
    }
 
    for(int i=n-1; i>=0; i--){
        if(s[i]=='(' && t[i]=='?'){
            r=i;
            break;
        }
    }
 
    //cout<<l<<" "<<r<<endl;
 
    if(l>=0 && r>=0){
        s[l]='(';
        s[r]=')';
        //cout<<s<<endl;
 
        stack<int> st;
 
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')' && !st.empty()){
                st.pop();
            }
        }
 
        if(st.empty()){
            cout<<"NO"<<endl;
            return;
        }
 
    }
 
    cout<<"YES"<<endl;
 
   
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