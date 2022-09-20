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
#include <stack>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
int a[20];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    ll n, g, b;
    cin >> n >> g >> b;
    ll half;
    ll ans = 0;
    half = (n + 1) / 2;
    ll p = (half + g - 1) / g; // the number of good blocks
    ans += half;
    ll bad_days = (p - 1) * b;
    ans += bad_days;
    if(n-(half+bad_days)>0){
        ans+=(n-(half+bad_days));
    }
    //cout<<bad_days<<" "<<half<<" "<<n-(half+bad_days)<<endl;
    cout<<ans<<endl;
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