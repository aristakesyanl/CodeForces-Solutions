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
const int D = 2e5 + 10;
int arr[200 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int k, a, b;
    cin >> k >> a >> b;
    string s;
    cin >> s;
    int n = s.size();
    //cout << n << endl;
    if ((n / k < a) || (b * k < n))
    {
        cout << "No solution" << endl;
        return;
    }

    int p = n / k;
    for (int i = 0; i < k; i++)
    {
        arr[i] = p;
    }

    int q = n - k * p;
    //cout << p << endl;
    if (q > 0 && p == b)
    {
        cout << "No solution" << endl;
        return;
    }

    for (int i = 0; i < q; i++)
    {
        arr[i]++;
    }

    int index = 0;

    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j <= p; j++)
        {
            cout << s[index + j];
        }
        cout << endl;
        index += (p + 1);
    }

    for (int i = 0; i < (k - q); i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << s[index + j];
        }
        cout << endl;
        index += p;
    }
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();
    return 0;
}