#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= 2 * k - n - 1; i++)
    {
        cout << i << " ";
    }
    for (int i = k; i >= 2 * k - n; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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