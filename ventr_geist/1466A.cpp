#include<bits/stdc++.h>
using namespace std;
void solve()
{
    bool check[100]={false};
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count=0;
    

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(check[arr[j]-arr[i]]==false)
            {
                check[arr[j]-arr[i]]=true;
                count++;
            }
        }
        
    }

    cout<<count<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}