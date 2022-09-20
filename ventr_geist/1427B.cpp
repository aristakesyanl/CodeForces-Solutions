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
//int arr[200000 + 10];
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    int win = 0, lose = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            win++;
            if (i == 0 || s[i - 1] == 'L')
                cnt++;
        }
        if (s[i] == 'L')
        {
            lose++;
            if (i == 0 || s[i - 1] == 'W')
            {
                v.push_back(0);
            }
            v.back()++;
        }
    }

    if (k >= lose)
    {
        cout << 2 * n - 1 << endl;
        return;
    }
    if (win == 0)
    {
        if (k == 0)
        {
            cout << 0 << endl;
            return;
        }
        cout << 2 * k - 1 << endl;
        return;
    }
    if (s[0] == 'L')
        v[0] = INF;
    if (s[n - 1] == 'L')
        v.back() = INF;
    sort(v.begin(), v.end());
    win += k;
    for (int it : v)
    {
        if (it > k)
            break;
        k -= it;
        cnt--;
    }
    cout << 2 * win - cnt << endl;

    return;
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}