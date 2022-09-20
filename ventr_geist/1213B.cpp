#include <bits/stdc++.h>
using namespace std;
int arr[150000];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int min;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        min = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] > min)
            {
                count++;
            }

            else
            {
                min = arr[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}