#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include<vector>
using namespace std;
void solve()
{
	long long int x1, x2, y1, y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<(x2-x1)*(y2-y1)+1<<endl;
	return ;
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