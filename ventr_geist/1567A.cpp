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
char first[100 + 10];
char second[100 + 10];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        second[i] = '*';
    }

    for (int i = 0; i < n; i++) {
        cin >> first[i];
        if (first[i] == 'U') {
            second[i] = 'D';
        }
        else if (first[i] == 'D') {
            second[i] = 'U';
        }

    }
    for(int i=0; i<n-1; ++i){
        if (second[i] == '*') {
            second[i] = 'L';
            second[i + 1] = 'R';
        }

    }

    for (int i = 0; i < n; i++)
    {
        cout << second[i];
    }
    cout << endl;

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