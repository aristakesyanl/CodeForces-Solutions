#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    int strlen = str.size();
    int count0 = 0, count1 = 0;
    for (int i = 0; i < strlen; i++)
    {
        if (str[i] == '0')
            count0++;
        else
        {
            count1++;
        }
    }

    int mincount=min(count0, count1);
    if(mincount%2==1) cout<<"DA"<<endl;
    else
    {
        cout<<"NET"<<endl;
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