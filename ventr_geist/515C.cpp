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
bool swaps[100 + 10] = {false};
ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' || s[i] == '1')
            continue;
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')
            v.push_back(s[i]);
        if (s[i] == '4')
        {
            v.push_back('3');
            v.push_back('2');
            v.push_back('2');
        }
        if (s[i] == '6')
        {
            v.push_back('5');
            v.push_back('3');
        }
        if (s[i] == '8')
        {
            v.push_back('2');
            v.push_back('2');
            v.push_back('2');
            v.push_back('7');
        }
        if (s[i] == '9')
        {
            v.push_back('3');
            v.push_back('3');
            v.push_back('2');
            v.push_back('7');
        }
    }
    n = v.size();
    sort(v.begin(), v.begin() + n);
    // for (auto s : v)
    // {
    //     cout << s;
    // }
    for (int i = n-1; i >=0; i--)
    {
        cout<<v[i];
    }
    
    cout << endl;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();
    return 0;
}