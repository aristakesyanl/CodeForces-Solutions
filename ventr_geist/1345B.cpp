#include<iostream>
#include<algorithm>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int count=0;
    while(n>1)
    {
        int h=0;
        while((3*(h+1)*(h+1)+h+1)/2<=n)
        {
            h++;
        }
        n-=(3*h*h+h)/2;
        count++;
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