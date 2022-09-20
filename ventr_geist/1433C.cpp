#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mx = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
            mx = max(mx, it);
        }

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != mx)
                continue;
            if (i > 0 && a[i - 1] != mx)
                idx = i + 1;
            if (i < n - 1 && a[i + 1] != mx)
                idx = i + 1;
        }

        cout << idx << endl;
    }

    return 0;
}