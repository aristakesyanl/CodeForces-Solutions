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
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool checkIfDegree(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }

    if (n == 1)
        return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll check = a[0] * a[n - 1];
    //cout << check << endl;
    vector<ll> b;
    for (ll i = 2; i * i <= check; i++)
    {
        if (check % i == 0)
        {
            b.push_back(i);
            if (i != check / i)
            {
                b.push_back(check / i);
            }
        }
    }
    sort(b.begin(), b.end());
    // for (int i = 0; i < b.size(); i++)
    // {
    //     cout << b[i] << " ";
    // }
    // cout << endl;

    if (a == b)
    {
        cout << check << endl;
        return;
    }
    cout << -1 << endl;
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