#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <cstring>
using namespace std;
const int INF = 2e9 + 1;
int arr[500+10];
void solve()
{
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	int ans=0;
	while(true)
	{
		bool flag=false;
		for (int i = 1; i <=n; i++)
		{
			if(arr[i]<arr[i-1]) flag=true;
		}
		if(!flag)
		{
			cout<<ans<<endl;
			break;
		}
		bool ok=false;
		for (int i = 1; i <=n; i++)
		{
			if(arr[i]>x)
			{
				swap(arr[i],x);
				ok=true;
				break;
			}
		}
		if(!ok)
		{
			cout<<-1<<endl;
			return;
		}
		ans++;
	
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