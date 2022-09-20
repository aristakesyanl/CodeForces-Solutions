#include <iostream>
using namespace std;
int arr[500 + 10];
int dp[500 + 10];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] + arr[i - 1] < k)
        {
            count += k - arr[i] - arr[i - 1];
            arr[i] += k - arr[i] - arr[i - 1];
        }
    }

    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}