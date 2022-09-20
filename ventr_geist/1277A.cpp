#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b = 0, ans = 0;

        for (int i = 1; i <= 9; i++)
        {
            b = b * 10 + 1;
            for (int j = 1; j <= 9; j++)
            {
                if (b * j <= n)
                    ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}