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
//const int mod = 1e9 + 7;
const int mod = 998244353;
int arr[200000 + 10];
int p[200000 + 10];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    int mx=arr[n-1];
    int next = -1;
    int next_count = 0;
    for (int i = n-1; i >=0; i--)
    {
        if (arr[i] != mx) {
            next = arr[i];
            break;
        }
        else {
            count++;
        }
    }
    for (int i = n-1; i >=0 ; i--)
    {
        if (arr[i] == next) {
            next_count++;
        }
    }
    int ans;
    int sub = 1;
    p[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        p[i] = (p[i - 1] * i) % mod;
        if (i != next_count + 1) {
            sub = (sub * i) % mod;
        }

    }

    if (count > 1) {
        ans = p[n];
        cout << ans << endl;
        return;
    }

    if ((mx - next) > 1) {
        ans = 0;
        cout << ans << endl;
        return;
    }


    //cout << "n!= " << p[n] << "sub= " << sub << endl;
    ans = (p[n] - sub + mod) % mod;
    cout << ans << endl;
    return;

    /*int n;
    cin >> n;
    p[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        p[i] = (p[i - 1] * i) % mod;
    }
    cout << p[n] << endl;*/


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