#include <iostream>
#include <algorithm>
using namespace std;
long long int arr[110];
void solve()
{
    long long int n, k;
    cin >> n >> k;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int sum = arr[0];
    long long int count = 0;
    long long int p, m;
    long long int maxdiff = 0;
    for (long long int i = 1; i < n; i++)
    {
        if (arr[i] * 100 > sum * k)
        {
            p = arr[i] * 100 - sum * k;
            m = (p + k - 1) / k;
            maxdiff = max(maxdiff, m);
        }
        sum += arr[i];
    }

    cout << maxdiff << endl;
    return;
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