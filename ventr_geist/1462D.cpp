#include <iostream>
#include <algorithm>
using namespace std;
int arr[3000 + 10];
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    //cout << sum << endl;
    int flag;
    int k;
    for (int i = n; i >= 1; i--)
    {
        if (sum % i == 0)
        {
            flag = 1;
            k = 0;
            for (int j = 0; j < n; j++)
            {
                k += arr[j];
                if (k > (sum / i))
                {
                    flag = 0;
                    j = n;
                }
                else if (k == (sum / i))
                {
                    k = 0;
                }
            }
            if (flag)
            {
                cout << n-i << endl;
                return;
            }
        }

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
    return 0;
}