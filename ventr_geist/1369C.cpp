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
ll arr[200000 + 10];
int w[200000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> w[i];
    }
    sort(arr, arr + n);
    sort(w, w + k);
    ll sum = 0;
    int p = n - 1;
    int count_1 = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[p];
        if (w[i] == 1)
        {
            sum += arr[p];
            count_1++;
        }
        w[i]--;
        p--;
    }
    p = 0;
    for (int i = k - 1; i >= count_1; i--)
    {
        sum += arr[p];
        p += w[i];
    }

    cout << sum << endl;
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