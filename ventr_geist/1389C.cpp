#include <bits/stdc++.h>
using namespace std;
int solve(string &str, int x, int y)
{
    int ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] - '0') == x)
        {
            ans++;
            swap(x, y);
        }
    }

    if (x != y && (ans & 1))
        ans--;
    return ans;
}

void solve()
{
    string str;
    cin >> str;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ans = max(ans, solve(str, i, j));
        }
    }

    cout << str.size() - ans << endl;
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