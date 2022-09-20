#include <bits/stdc++.h>
using namespace std;
int arr[2010];
int res[2010];
bool flag;
//function for simulating the process
void simulate(int x, int &count, int n)
{
    //insert all the elements of array arr into set
    multiset<int> s;
    for (int i = 0; i < 2 * n; i++)
    {
        s.insert(arr[i]);
    }
    flag = 1;

    //simulate the process of deleting elements from array
    //keep the track of elements to be deleted in an array res
    //for elements p we need to check if any any pair of x1, x2 make up that number
    //x1+x2

    for (int i = 0; i < n; i++)
    {
        auto it1 = s.end();
        it1--;
        int maxelem = *it1;
        s.erase(it1);
        int y = x - maxelem;
        auto it2 = s.find(y);
        if (it2 == s.end())
        {
            flag = 0;
            count=0;
            return;
        }
        else
        {
            res[count++] = maxelem;
            res[count++] = y;
            s.erase(it2);
            x=max(y, x-y);
        }
    }

}
void solve()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 2 * n);

    //for the max value of the array and every element from array
    //not including the max value simulate the process and check
    //if it is possible to delete all elements from array

    int maxelem = arr[2 * n - 1];
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int x = maxelem + arr[i];
        simulate(x, count, n);
        if (flag)
        {
            cout << "YES" << endl;
            cout<<x<<endl;
            for (int i = 0; i < count; i += 2)
            {
                cout << res[i] << " " << res[i + 1] << endl;
            }
            return;
        }
    }
    cout << "NO" << endl;
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