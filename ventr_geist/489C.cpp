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
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int m, s;
    cin >> m >> s;
    int p = m;
    int m1 = m;
    int s1 = s;
    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if (m > 1 && s == 0)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    if (s > 9 * m)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    for (int i = 1; i < 10; i++)
    {
        if ((s - i) <= (m - 1) * 9)
        {
            m--;
            s -= i;
            arr[0] = i;
            break;
        }
    }

    for (int i = 1; i < p; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((s - j) <= (m - 1) * 9)
            {
                arr[i] = j;
                m--;
                s -= j;
                break;
            }
        }
    }
    for (int i = 0; i < p; i++)
    {
        cout << arr[i];
    }
    cout << " ";
    
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((s1 - j) <= (m1 - 1) * 9)
            {
                arr[i] = j;
                m1--;
                s1 -= j;
                break;
            }
        }
    }
    sort(arr, arr + p);
    for (int i = p - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
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