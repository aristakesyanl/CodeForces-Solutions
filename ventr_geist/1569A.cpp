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
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
int pre_a[100];
int pre_b[100];
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    /*if (s[0] == 'a') pre_a[0]++;
    if (s[0] == 'b') pre_b[0]++;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'a') {
            pre_a[i] = pre_a[i - 1] + 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'b') {
            pre_b[i] = pre_b[i - 1] + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (pre_a[i] == pre_b[i]) {
            cout << 1 << " " << i + 1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (pre_a[j] - pre_a[i] == pre_b[j] - pre_b[i]) {
                cout << i + 2 << " " << j + 1 << endl;
                return;
            }
        }
    }*/

    int a = 0, b=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            b = 0;
            a = 0;
            for (int k = i; k <= j; k++) {
                if (s[k] == 'a') {
                    a++;
                }
                if (s[k] == 'b') {
                    b++;
                }

            }
            if (a == b) {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
            a = 0;
            b = 0;
        }

    }

    cout << -1 <<" "<<-1<< endl;
    return;
   
    
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