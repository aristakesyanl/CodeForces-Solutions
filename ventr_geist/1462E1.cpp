#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;
void solve()
{
    long long int n;
    cin >> n;
    long long int x;
    vector<long long int> count(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        count[x]++;
    }
    long long int ans = 0;
  
    for (int i = 3; i <= n; i++)
    {
        ans += count[i] * count[i - 1] * count[i - 2];
    }

    for (int i = 2; i <= n; i++)
    {
        ans += count[i] * (count[i] - 1) * count[i - 1] / 2;
    }
    for (int i = 3; i <= n; i++)
    {
        ans += count[i] * (count[i] - 1) * count[i - 2] / 2;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        ans += count[i] * (count[i] - 1) * count[i + 1] / 2;
    }

    for (int i = 1; i <= n - 2; i++)
    {
        ans += count[i] * (count[i] - 1) * count[i + 2] / 2;
    }

    for (int i = 1; i <= n; i++)
    {
        ans += count[i] * (count[i] - 1) * (count[i] - 2) / 6;
    }
    cout << ans << endl;
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