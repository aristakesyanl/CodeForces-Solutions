#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0, i = 0;
        cin >> n;
        k = n % 10;
        while (n > 0)
        {
            n /= 10;
            i++;

            count += i;
        }
        count += (k - 1) * 10;
        cout << count << endl;
    }

    return 0;
}