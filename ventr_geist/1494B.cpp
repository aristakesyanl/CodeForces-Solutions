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
void solve()
{
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                for (int p = 0; p < 2; p++)
                {
                    if (u - i - p >= 0 && u - i - p <= n - 2 && r - i - j >= 0 && r - i - j <= n - 2 && d - j - k >= 0 && d - j - k <= n - 2 && l - k - p >= 0 && l - k - p <= n - 2)
                    {
                        cout << "YES" << endl;
                        return;
                    }
                }
            }
        }
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