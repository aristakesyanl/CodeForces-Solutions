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
int a[10000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    bool b[100+10] = {false};
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (b[a[i]] == false)
        {
            v.push_back(a[i]);
            b[a[i]] = true;
        }
    }

    int count = v.size();

    if (count > k)
    {
        cout << -1 << endl;
        return;
    }
    cout << n * k << endl;

    for (int i = 0; i < n; i++)
    {
        for (auto b : v)
        {
            cout << b << " ";
        }
        for (int j = 0; j < k - count; j++)
        {
            cout << 1 << " ";
        }
    }
    cout << endl;
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
    //solve();
    return 0;
}