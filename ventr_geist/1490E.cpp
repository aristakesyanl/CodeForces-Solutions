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
pair<int, int> p[200000 + 10];
int arr[200000 + 10];
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(p + 1, p + 1 + n);
    ll sum = 0;
    int last;
    for (int i = 1; i <= n; i++)
    {
        if (sum < p[i].first)
        {
            last = i;
        }
        sum += p[i].first;
    }
    cout << n - last + 1 << endl;
    int k = 0;
    for (int i = last; i <= n; i++)
    {
        arr[k++] = p[i].second;
    }
    sort(arr, arr + k);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}