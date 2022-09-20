#include <iostream>
#include <algorithm>
using namespace std;
long long int arr[200000+10];
void solve()
{
    long long int n;
    cin >> n;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long int count = 0;
    long long int alice=0;
    long long int bob=0;

    for (long long int i = n-1; i >= 0; i--)
    {
        if (count % 2 == 0)
        {
            if (arr[i] % 2 == 0)
            {
                alice += arr[i];
            }
            count++;
        }
        else
        {
            if (arr[i] % 2 == 1)
            {
                bob+=arr[i];
            }
            count++;
        }
    }
    //cout<<res<<endl;
    if (alice == bob)
    {
        cout << "Tie" << endl;
        return;
    }
    if (alice > bob)
    {
        cout << "Alice" << endl;
        return;
    }
    if (alice < bob)
    {
        cout << "Bob" << endl;
        return;
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