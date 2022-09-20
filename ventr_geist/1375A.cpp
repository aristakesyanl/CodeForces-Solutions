#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i += 2)
        {
            arr[i] = abs(arr[i]);
        }

        for (int i = 1; i < n; i += 2)
        {
            arr[i] = -abs(arr[i]);
        }

        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}