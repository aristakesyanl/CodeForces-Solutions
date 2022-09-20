#include <bits/stdc++.h>
using namespace std;
long long int arr[55];
void solve()
{
    long long int n, odd=0, even=0,i;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i%2==1) odd+=arr[i];
        else even+=arr[i];
    }

    if(even<=odd)
    {
        for (i = 0; i < n; i++)
        {
           if(i%2==1)
           cout<<arr[i]<<" ";
           else cout<<1<<" ";
        }
        cout<<endl;
        
    }

    else
    {
        for (i = 0; i < n; i++)
        {
           if(i%2==0)
           cout<<arr[i]<<" ";
           else cout<<1<<" ";
        }
        cout<<endl;
        
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
}