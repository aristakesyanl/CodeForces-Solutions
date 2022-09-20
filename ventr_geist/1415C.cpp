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
const int D = 2e5 + 10;
char arr[100000 + 10];
ll b[100000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, p, k;
    cin >> n >> p >> k;
    char c;
    for (int i = 1; i <= n; i++)
    {
        cin >>c;
        if(c=='0') arr[i]=0;
        else arr[i]=1;
     }
    // for (int i = 1; i <=n ; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;

    int x, y;
    cin >> x >> y;

    for (int i = n; i >= 0; i--)
    {
        b[i]=!arr[i];
        if (i + k <= n)
            b[i] += b[i + k];
    }

    // for (int i = 1; i <=n ; i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;



    ll ans = INF;
    for (int i = p; i <= n; i++)
    {
        ans = min(ans, (b[i] * x + (i - p) * y));
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    //solve();
    return 0;
}