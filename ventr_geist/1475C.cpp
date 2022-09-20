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
int p[200000 + 10];
int q[200000 + 10];
int girl[200000 + 10];
int boy[200000 + 10];
void solve()
{
    int a, b, k, g, t;
    cin >> a >> b >> k;
    for (int i = 0; i <= max(a,b); i++)
    {
        boy[i] = 0;
        girl[i] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> p[i];
        boy[p[i]]++;
    }

    for (int i = 0; i < k; i++)
    {
        cin >> q[i];
        girl[q[i]]++;
    }

    // for (int i = 0; i <= a; i++)
    // {
    //     cout << boy[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i <= b; i++)
    // {
    //     cout << girl[i] << " ";
    // }
    // cout << endl;
    ll  count = 0;
    for (int i = 0; i < k; i++)
    {
        count += k - boy[p[i]] - girl[q[i]]+1;
    }
    count /= 2;
    cout << count << endl;

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