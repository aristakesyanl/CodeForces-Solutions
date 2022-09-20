#include <iostream>
#include <algorithm>
using namespace std;
int a[100000 + 10];
int b[100000 + 10];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);
    int mincount = b[0];

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] % mincount != 0)
                flag = 0;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}