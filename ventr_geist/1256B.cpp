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
int arr[100 + 10];
bool swaps[100 + 10] = {false};
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    int pos = 0;
    while (pos < n)
    {
        int it = min_element(a.begin() + pos, a.end())-a.begin();
        int mn = a[it];
        a.erase(a.begin() + it);
        a.insert(a.begin() + pos, mn);
        if (pos == it)
            pos++;
        else
            pos = it;
    }
    for (auto s : a)
    {
        cout << s+1 << " ";
    }
    cout << endl;
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