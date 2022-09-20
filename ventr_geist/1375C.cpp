#include <bits/stdc++.h>
using namespace std;
int arr[300010];
void solve()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    if(arr[0]<arr[n-1]) cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
        
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