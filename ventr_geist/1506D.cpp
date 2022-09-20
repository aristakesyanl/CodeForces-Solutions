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
int arr[200000 + 10];
int cnt[200000 + 10];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k = 0;
    int j = 0;
    cnt[j] = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            cnt[j]++;
        else
        {
            j++;
            cnt[j] = 1;
        }
    }
    // for (int i = 0; i <= j; i++)
    // {
    //     cout << cnt[i] << " ";
    // }
    // cout << endl;
    sort(cnt, cnt + j + 1);
    if (arr[n - 1] == arr[0])
    {
        cout << n << endl;
        return;
    }
    if (cnt[j] > n / 2)
    {
        cout << 2 * cnt[j] - n << endl;
        return;
    }
    else
    {
        cout << n % 2 << endl;
        return;
    }
    // if (n % 2 == 0)
    // {
    //     if (cnt[j] > n / 2)
    //     {
    //         cout << 2 * cnt[j] - n << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << 0 << endl;
    //         return;
    //     }
    // }
    // if (cnt[j] > n / 2)
    // {
    //     cout << 2 * cnt[j] - n << endl;
    //     return;
    // }
    // // cnt[j]--;
    // // if (cnt[j - 1] > cnt[j])
    // // {
    // //     swap(cnt[j], cnt[j - 1]);
    // // }
    // else
    // {
    //     cout << 1 << endl;
    //     return;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cnt[arr[i]]++;
    // }
    // int p = n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << cnt[i] << " ";
    // }
    // cout << endl;
    // int p = n;

    // for (int i = 0; i <= j; i++)
    // {
    //     if (cnt[i] <= p - cnt[i] && p > 0)
    //     {
    //         p -= 2 * cnt[i];
    //     }
    //     else if (p > 0)
    //     {
    //         p = 2 * cnt[i] - p;
    //         break;
    //     }
    // }
    // cout << p << endl;
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