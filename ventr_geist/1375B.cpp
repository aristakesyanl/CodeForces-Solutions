#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int res[310][310];
    int n, m;
    bool good = true;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> res[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int max = 4;
            if (i == 0 || i == n - 1)
                max--;

            if (j == 0 || j == m - 1)
                max--;

            if (res[i][j] > max)
            {
                cout << "NO" << endl;
                return;
            }
            res[i][j] = max;
            ;
        }
    }

    cout << "YES" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
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