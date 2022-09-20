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
ll arr[200000 + 10];
void solve()
{
    int n;
    cin >> n;
    ll sum = 0;
    ll mx = INT64_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    ll k = (sum + n - 2) / (n - 1);
    k = max(mx, k);
    k = (n - 1) * k - sum;
    cout << k << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}