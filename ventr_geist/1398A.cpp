#include <iostream>
#include <cmath>
using namespace std;
int arr[50000 + 10];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int flag = 1;

    if (arr[0] + arr[1] > arr[n - 1])
    {
        cout << -1 << endl;
        flag=0;
      
    }

    if (flag)
    {
        cout << 1 << " " << 2 << " " << n << endl;
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