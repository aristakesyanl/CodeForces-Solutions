#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <utility>
#include <set>
#include<stack>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
int a[200000 + 10];
int b[200000 + 10];
int change[200000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    string s;
    cin>>s;
    int res;
    int total_0=0;
    int total_1=0;
    int n=s.size();
    int num_0=0;
    int num_1=0;
    int p,q;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0') total_0++;
        else total_1++;
    }
    res=min(n-total_0,n-total_1);
    //cout<<res<<endl;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0') num_0++;
        else num_1++;
        //cout<<num_0<<" "<<num_1<<endl;
        //first part of string consists of only 0's and the second part of the string consists of only 1's
        //so we change 1's to 0's in the first part and 0's to 1's in the second part of the string
        p=n-num_1-(total_0-num_0);
        q= n-num_0-(total_1-num_1);
        //cout<<p<<" "<<q<<endl;
        int mn=min(p,q);
         res=min(res,mn);
        // cout<<p+q<<" ";
    }
    //cout<<endl;
    
    cout<<res<<endl;

    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    //solve();
    return 0;
}