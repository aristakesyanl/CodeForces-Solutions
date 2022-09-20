#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, k;
    string s;
    cin >> n >> k >> s;
    unordered_map<char, int> lastpos;
    unordered_set<char> active;
    for (int i = 0; i < n; i++)
    {
        lastpos[s[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        active.insert(s[i]);
        if (active.size() > k)
        {
            cout << "YES";
            return 0;
        }
        if (lastpos[s[i]] == i)
        {
            active.erase(s[i]);
        }
    }

    cout << "NO" << endl;
}