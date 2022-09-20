#include <iostream>
using namespace std;
int main()
{
    int arr[32];
    arr[1] = 2;
    for (int i = 2; i < 32; i++)
    {
        arr[i] = 2 * arr[i - 1];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int dif = 0;
        int sum1 = 0, sum2 = 0;

        sum1 += arr[n];
        for (int i = 1; i <= n / 2 - 1; i++)
        {
            sum1 += arr[i];
        }

        for (int i = n / 2; i < n; i++)
        {
            sum2 += arr[i];
        }

        dif = sum1 - sum2;

        cout << dif << endl;
    }

    return 0;
}