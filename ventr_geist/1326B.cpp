#include <iostream>
#include <algorithm>
using namespace std;
int b[200000 + 10];
int a[200000 + 10];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    a[0] = b[0];
    //a[1] = b[1];
    int maxnum = a[0];

    cout << a[0] << " ";

    for (int i = 1; i < n; i++)
    {
        a[i] = b[i] + maxnum;
        maxnum = max(maxnum, a[i]);
        cout << a[i] << " ";
    }

    return 0;
}