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
    if (n == 1)
    {
        cout << "FastestFinger" << endl;
        return;
    }
    if (n == 2)
    {
        cout << "Ashishgup" << endl;
        return;
    }
    if (n % 2 == 1 && n > 1)
    {
        cout << "Ashishgup" << endl;
        return;
    }
    bool flag = checkIfDegree(n);
    if (flag)
    {
        cout << "FastestFinger" << endl;
        return;
    }
    n /= 2;
    if (n % 2 == 0)
    {
        cout << "Ashishgup" << endl;
        return;
    }
    if (n % 2 == 1)
    {
        if (isPrime((n)))
        {
            cout << "FastestFinger" << endl;
            return;
        }
        else
        {
            cout << "Ashishgup" << endl;
            return;
        }
    }
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