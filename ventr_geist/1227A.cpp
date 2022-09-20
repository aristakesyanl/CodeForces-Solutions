#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int l,r;
        int k=INT32_MAX;
        int m=0;
        for (int i = 0; i < n; i++)
        {
            cin>>l>>r;
            k=min(r,k);
            m=max(l,m);
     
        }

        cout<<max(m-k,0)<<endl;
        
    }
}