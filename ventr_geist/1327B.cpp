#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int t, n, k, num, flag, ans1, ans2;
    cin >> t;
    while (t--)
    {
        bool princess[100010] = {false};
        bool prince[100010] = {false};
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            for (int j = 1; j <= k; j++)
            {
                cin >> num;
                if (princess[i] == 0 && prince[num] == 0)
                {
                    princess[i] = 1;
                    prince[num] = 1;
                }
            }
        }

        flag = 0;

        for (int i = 1; i <= n; i++)
        {
            if (princess[i] == 0)
            {
                flag = 1;

                ans1 = i;
                break;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (prince[i] == 0)
            {
                ans2 = i;
                i = n + 1;
            }
        }

        if (flag)
        {
            cout << "IMPROVE" << endl;
            cout << ans1 << " " << ans2 << endl;
        }

        else
        {
            cout << "OPTIMAL" << endl;
        }
    }

    return 0;
}