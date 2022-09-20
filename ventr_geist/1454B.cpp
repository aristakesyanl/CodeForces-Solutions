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
        vector<int> a(n);
        vector<int> res(n + 1, 0);
        for (auto &it : a)
        {
            cin >> it;
            res[it]++;
        }

        int mn = INT32_MAX;
        int index = -1;

        for (int i = 0; i < n; i++)
        {
            if (res[a[i]] == 1)
            {
                if (a[i] < mn)
                {
                    mn=a[i];
                    index = i + 1;
                }
            }
        }

        cout << index << endl;
    }

    return 0;
}