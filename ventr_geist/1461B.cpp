#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <utility>
#include <set>
#include <stack>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
const int D = 2e5 + 10;
char arr[500 + 10][500 + 10];
int w[500 + 10][500 + 10];
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            arr[i][j] = c;
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            w[i][j] = INF;
        }
    }

    int count;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '*')
                count++;
            else
                count = 0;
            w[i][j] = min(w[i][j], count);
        }

        count = 0;

        for (int j = m - 1; j >= 0; j--)
        {
            if (arr[i][j] == '*')
                count++;
            else
                count = 0;
            w[i][j] = min(w[i][j], count);
        }
    }

    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << w[i][j] << " ";
        }
        cout << endl;
    }*/

    int ans = 0;

    // for (int c = 0; c < m; c++)
    // {
    //     for (int r = 0; r < n; r++)
    //     {
    //         count = 1;
    //         for (int cc = c; cc < m; cc++)
    //         {
    //             cout<<cc<<"__"<<r<<"__"<<w[cc][r]<<"__"<<count<<"__"<<ans<<" ";
    //             if (w[cc][r] < count)
    //             {
    //                 cc = m;
    //             }
    //             else
    //             {
    //                 count++;
    //                 ans++;
    //                 //cout << ans <<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    // }

    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < m; c++)
        {

            count = 1;

            for (int rr = r; rr < n; rr++)
            {
                //cout << rr << "__" << c << "__" << w[rr][c] << "__" << count <<" ";
                if (w[rr][c] < count) break;
                ans++;
                count++;
            }
            //cout << endl;
        }

    }


    cout << ans << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    //solve();
    return 0;
}