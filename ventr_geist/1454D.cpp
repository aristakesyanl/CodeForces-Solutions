#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<pair<int, long long>> val;
        for (long long i = 2; i * i <= n; i++)
        {
            int count = 0;
            while (n % i == 0)
            {
                count++;
                n = n / i;
            }
            if (count > 0)
            {
                val.push_back({count, i});
            }
        }

        if (n > 1)
        {
            val.push_back({1, n});
        }

        sort(val.rbegin(), val.rend());
        vector<long long> ans(val[0].first, val[0].second);
        for (int i = 1; i < val.size(); i++)
        {
            for (int j = 0; j < val[i].first; j++)
            {
                ans[ans.size()-1]*= val[i].second;
            }
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}