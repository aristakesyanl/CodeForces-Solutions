#include<iostream>
#include<algorithm>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int k=n/2;
    if(n%2==0)cout<<(k+1)*(k+1)<<endl;
    else cout<<2*(k+1)*(k+2)<<endl;
    return;
}
int main()
{
    solve();
    return 0;
}