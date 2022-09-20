#include <bits/stdc++.h>
using namespace std;
const int N = 75;
int a[N][N];
int dp[N][N][N][N];
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    memset(dp, -1, sizeof(dp));
    dp[0][0][0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int x = 0; x <= m / 2; x++)
            {
                for (int y = 0; y < k; y++)
                {
                    if (dp[i][j][x][y] == -1)
                        continue;
                    if (j == m)
                        dp[i + 1][0][0][y] = max(dp[i + 1][0][0][y], dp[i][j][x][y]);
                    else
                    {
                        dp[i][j + 1][x][y] = max(dp[i][j + 1][x][y], dp[i][j][x][y]);
                        dp[i][j + 1][x + 1][(y + a[i][j + 1]) % k] = max(dp[i][j + 1][x + 1][(y + a[i][j + 1]) % k], dp[i][j][x][y] + a[i][j + 1]);
                    }
                }
            }
        }
    }

    cout << dp[n + 1][0][0][0] << " ";

    return 0;
}