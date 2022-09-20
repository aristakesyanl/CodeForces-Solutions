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
char arr[50 + 10][50 + 10];
int b[50 + 10];
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2') {
            sum++;
            b[k++] = i;
        }
    }
    if (sum < 3 && sum>0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    /*for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            for (int j = 0; j < n; j++)
            {
                if (i != j) {
                    arr[i][j] = '=';
                }
                else {
                    arr[i][j] = 'X';
                }
            }
        }
    }*/

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                arr[i][j] = '=';
            }
            else {
                arr[i][j] = 'X';
            }
        }
    }

    /*for (int i = 0; i < k; i++)
    {
        cout << b[i] << " ";
    }*/

    //cout << k << endl;
    if (sum > 0) {
        for (int i = 0; i < k - 1; i++)
        {
            arr[b[i]][b[i + 1]] = '+';
            arr[b[i + 1]][b[i]] = '-';
        }
        arr[b[k - 1]][b[0]] = '+';
        arr[b[0]][b[k - 1]] = '-';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
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