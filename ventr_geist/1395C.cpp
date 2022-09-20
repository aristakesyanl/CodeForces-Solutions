#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <utility>
using namespace std;
int a[210];
int b[210];
int n, m;
bool check(int x)
{
    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < m; j++)
        {
            int p = a[i] & b[j];
            if ((p | x) == x)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        return false;
    }
    return true;
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int k = 0; k <= (1 << 9); k++)
    {
        if (check(k))
        {
            cout << k << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    solve();
    return 0;
}