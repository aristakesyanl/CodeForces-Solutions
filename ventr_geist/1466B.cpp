#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int arr[100000 + 100];
    int arr2[100000 + 100];
    int n;
    cin >> n;
    bool check[200000 + 100] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(check[arr[i]]==false)
        {
            check[arr[i]]=true;
            count++;
        }
        else
        {
            if(check[arr[i]+1]==false)
            {
                check[arr[i]+1]=true;
                count++;
            }
        }
        
    }

    
    cout<<count<<endl;
    
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