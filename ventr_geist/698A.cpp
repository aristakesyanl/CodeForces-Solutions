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
int arr[100 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n;
    cin >> n;
    int prev = 0;
    int days = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // if (arr[i] == 0)
        // {
        //     days ++;
        //     prev=0;
        // }
        // else if (arr[i] == prev && arr[i] < 3)
        // {
        //     prev = 0;
        //     days++;
        // }
        // else if (arr[i] == 3)
        // {
        //     prev = 3 - arr[i];
        // }
        // else
        //     prev = arr[i];
        if (!arr[i])
            sum++;
        else if (arr[i] == arr[i - 1] && arr[i] < 3)
        {
            arr[i] = 0,
            sum++;
        }
        else if (arr[i] == 3)
            arr[i] = 3 - arr[i - 1];
    }
    cout << sum << endl;
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