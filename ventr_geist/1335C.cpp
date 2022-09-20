#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> cnt(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ++cnt[x];
        }

        int diff=n+1-count(cnt.begin(), cnt.end(),0);
        int maxnum=*max_element(cnt.begin(),cnt.end());

        cout<<max(min(maxnum,diff-1),min(diff,maxnum-1))<<endl;
    }

    return 0;
}