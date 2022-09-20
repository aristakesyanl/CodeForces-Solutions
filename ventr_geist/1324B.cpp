#include <bits/stdc++.h>
using namespace std;
int a[5000 + 10];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[i] == a[j] && j - i > 1)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    i = n;
                }
            }
        }

        if (flag)
            cout << "NO" << endl;
    }
    return 0;
}