#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, k;
    cin >> n >> x;
    if (n <= 2)
        cout << 1 << endl;
    else
    {
        k = (n - 3 + x) / x;
        cout << 1 + k << endl;
    }
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