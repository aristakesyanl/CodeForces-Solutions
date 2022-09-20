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
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
int arr[200000 + 10];
void solve()
{
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    ll count = 0;
    ll index = 0;
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % k == 0)
            continue;
        else
        {
            arr[i] %= k;
            int p = k - arr[i];
            //cout << p << endl;
            m[p]++;
            if (m[p] == mx)
            {
                if (p > index)
                {
                    index = p;
                }
            }
            if (m[p] > mx)
            {
                mx = m[p];
                index = p;
            }
            //count ++;
        }
    }
    if (mx == 0)
    {
        cout << mx << endl;
        return;
    }
    //cout << mx << " " << index << endl;
    count = k * 1ll * (mx - 1) + index + 1;
    cout << count << endl;
    return;
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}