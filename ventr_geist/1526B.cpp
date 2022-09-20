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
int a[200000 + 10];
int b[200000 + 10];
int change[200000 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
bool solve()
{
    ll x;
    cin >> x;
    if (x > 1099)
        return true;

    if (x % 11 == 0)
        return true;
    if (x % 111 == 0)
        return true;
    for (int i = 1; i <= 10; i++)
    {
        int k= x-i * 111;
        if (k>0 && k % 11 == 0)
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    //solve();
    return 0;
}