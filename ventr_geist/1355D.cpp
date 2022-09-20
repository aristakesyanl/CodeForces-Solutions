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
bool swaps[100 + 10] = {false};
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, s;
    cin >> n >> s;
    if (2 * n <= s)
    {
        cout << "YES" << endl;
        cout << s - ((n - 1) * 2) << " ";
        for (int i = 1; i < n; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
        cout<<1<<endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();
    return 0;
}