#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &k : arr)
    {
        cin >> k;
        k--;
    }

    vector<int> left(n + 10, 0);

    long long int ans = 0;

    for (int j = 0; j < n; j++)
    {
        vector<int> right(n + 10, 0);

        for (int k = n - 1; k > j; k--)
        {
            ans += left[arr[k]] * right[arr[j]];
            right[arr[k]]++;
        }
        left[arr[j]]++;
    }

    cout << ans << endl;
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