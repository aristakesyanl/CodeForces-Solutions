#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int arr[200000 + 10];
    int arr2[200000+10];
    int n;
    cin >> n;
    long long int w;
    cin >> w;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= ((w + 1) / 2) && arr[i] <= w)
        {
            cout << 1 << endl;
            cout << i+1 << endl;
            return;
        }
    }
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < (w + 1) / 2)
        {
            sum+=arr[i];
            arr2[k++]=i;
            count++;
            if(sum>=((w+1)/2))
            {
                i=n;
            }
        }
    }
    if (sum < (w + 1) / 2)
        cout << -1 << endl;
    else
    {
        long long int sum1 = 0;
        cout << count << endl;
        for (int i = 0; i < k; i++)
        {
            cout<<arr2[i]+1<<" ";
        }
        cout << endl;
    }
    return;
    // cout<<sum<<endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    // return;
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