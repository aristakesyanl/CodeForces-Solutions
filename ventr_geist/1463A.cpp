#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c,p;
    cin >> a >> b >> c;
    p = min(a, b);
    p = min(p, c);
    int k = (a + b + c) / 9;
   // cout<<k<<endl;
    if ((a + b + c) % 9 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    else if (k > p)
    {
        cout << "NO" << endl;
        return;
    }

    else
    {
        cout << "YES" << endl;
        return;
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
}