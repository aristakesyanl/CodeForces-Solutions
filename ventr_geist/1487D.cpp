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
    // int k = (int)floor(sqrt(2 * n - 3));
    // if (k % 2 == 0)
    // {
    //     cout << k / 2 - 1 << endl;
    //     return;
    // }
    // cout << k / 2 << endl;
    int count = 0;
    for (int i = 3; i * i <= 2 * n - 1; i += 2)
    {
        count++;
    }
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