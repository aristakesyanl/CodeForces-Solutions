#include<iostream>
#include<algorithm>
using namespace std;
int r[100+10];
int b[100+10];
void solve()
{
    int n;
    cin>>n;
    int max_r=0, max_b=0;
    int count_r=0, count_b=0;
    for (int i = 0; i < n; i++)
    {
        cin>>r[i];
        count_r+=r[i];
        max_r=max(max_r, count_r);
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        count_b+=b[i];
        max_b=max(max_b, count_b);
    }
    cout<<max(max_r, max_r+max_b)<<endl;
    return;
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