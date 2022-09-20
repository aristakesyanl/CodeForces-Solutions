#include <bits/stdc++.h>
using namespace std;
bool fnc(long long int a, long long int b, long long int n, long long int m)
{
    if ((a + b) < (n + m))
        return false;
    else
    {
        if (b <= a && b < m)
            return false;
        if (a < b && a < m)
            return false;
    }

    return true;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n, m;
        cin >> a >> b >> n >> m;
        if (fnc(a, b, n, m))
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}