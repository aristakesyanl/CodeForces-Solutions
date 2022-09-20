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
int pre[200000 + 10];
int suf[200000 + 10];
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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == t[j] && j < m)
        {
            pre[j] = i;
            j++;
        }
    }
    j = m - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == t[j] && j >= 0)
        {
            suf[j] = i;
            j--;
        }
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << pre[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     cout << suf[i] << " ";
    // }
    // cout << endl;

    int mx = INT32_MIN;
    for (int i = 0; i < m - 1; i++)
    {
        mx = max(suf[i+1]-pre[i],mx);
    }
    cout << mx << endl;
    return;
}
int main()
{
    solve();
    return 0;
}