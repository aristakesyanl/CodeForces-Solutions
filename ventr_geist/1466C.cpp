#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int len = str.size();
    bool check[100000 + 100] = {false};

    int count = 0;
    for (int i = 1; i < len; i++)
    {
        bool use_need=false;
        if(str[i]==str[i-1] && check[i-1]==false)
        check[i]=true;
        if(i>1 && str[i]==str[i-2] && check[i-2]==false)
        check[i]=true;

        if(check[i]) count++;
    }

    // for (int i = 0; i < len; i++)
    // {
    //     cout<<check[i]<<" ";
    // }

    // cout<<endl;
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