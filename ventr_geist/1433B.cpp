#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<int> a(n);
       for(auto &it :a) cin>>it;
       while(a.back()==0) a.pop_back();
       reverse(a.begin(),a.end());
       while(a.back()==0) a.pop_back();
       cout<<count(a.begin(),a.end(),0)<<endl;
    }

    return 0;
}