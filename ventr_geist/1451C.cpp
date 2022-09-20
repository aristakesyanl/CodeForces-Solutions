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
int cnt1[26];
int cnt2[26];
int nw[26];
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < 26; i++)
    {
        cnt1[i] = 0;
        cnt2[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cnt1[s[i] - 'a']++;
        cnt2[t[i] - 'a']++;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
        return;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     nw[i] = cnt2[i] - cnt1[i];
    // }
    // if (cnt1[0] < cnt2[0])
    // {
    //     cout << "NO" << endl;
    //     return;
    // }
    // int rem = cnt1[0] - cnt2[0];
    // if (rem % k != 0)
    // {
    //     cout << "NO" << endl;
    //     return;
    // }
    // for (int i = 1; i < 26; i++)
    // {
    //     if (rem + cnt1[i] < cnt2[i])
    //     {
    //         cout << "NO" << endl;
    //         return;
    //     }
    //     if((cnt1[i]-cnt2[i])%k!=0)
    //     {
    //         cout << "NO" << endl;
    //     }
    //     rem = rem + cnt1[i] - cnt2[i];

    // }
    // cout << "YES" << endl;

    for (int i = 0; i < 25; i++)
    {
        if (cnt1[i] < cnt2[i])
        {
            cout << "NO" << endl;
            return;
        }
        if ((cnt1[i] - cnt2[i]) % k != 0)
        {
            cout << "NO" << endl;
            return;
        }
        cnt1[i + 1] += cnt1[i] - cnt2[i];
    }
    if (cnt1[25] == cnt2[25])
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;

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