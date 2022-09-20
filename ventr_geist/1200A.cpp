#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    string str;
    cin >> str;
    bitset<10> s;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
        {
            for (int j = 0; j < 10; ++j)
            {
                if (s[j] == 0)
                {
                    s[j] = 1;
                    j=10;
                }
            }
        }
        else if (str[i] == 'R')
        {
            for (int j = 9; j >= 0; --j)
            {
                if (s[j] == 0)
                {
                    s[j] = 1;
                    j=-1;
                }
            }
        }

        else
        {
            s[str[i] - '0'] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    
}

int main()
{
    solve();
    return 0;
}