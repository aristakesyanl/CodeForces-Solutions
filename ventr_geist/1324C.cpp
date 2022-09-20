#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int maxcount = 0;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'L')
            {
                count++;
            }

            else if (str[i] == 'R')
            {
                maxcount = max(count, maxcount);
                count = 0;
            }

             if (i == str.size() - 1)
            {
                maxcount = max(count, maxcount);
            }
        }

        cout << maxcount + 1 << endl;
    }

    return 0;
}