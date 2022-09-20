#include <bits/stdc++.h>
using namespace std;
bool found;
void shift(multiset<int> &l, multiset<int> &r, int val)
{
    l.erase(l.find(val));
    r.insert(val);
}

void check(const multiset<int> &left, const multiset<int> &mid, const multiset<int> &right)
{
    if (found || left.empty() || mid.empty() || right.empty())
        return;
    if (*left.rbegin() == *mid.begin() && *mid.begin() == *right.rbegin())
    {
        found = true;
        cout << "YES" << endl;
        cout << left.size() << " " << mid.size() << " " << right.size() << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
        {
            cin >> it;
        }
        found = false;

        multiset<int> left, mid(a.begin(), a.end()), right;
        int r = n - 1;
        for (int l = 0; l < n - 2; l++)
        {
            shift(mid, left, a[l]);
            while (r - 1 >= l && a[r] <= *left.rbegin())
            {
                shift(mid, right, a[r]);
                --r;
            }

            while (r - 1 < l)
            {
                shift(right, mid, a[r + 1]);
                r++;
            }
            check(left, mid, right);
            shift(left, mid, a[l]);
            check(left, mid, right);
            shift(mid, left, a[l]);
            if (right.empty())
                continue;
            shift(right, mid, a[r + 1]);
            check(left, mid, right);
            shift(mid, right, a[r + 1]);
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}