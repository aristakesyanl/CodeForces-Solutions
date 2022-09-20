#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include<cstring>
using namespace std;
const int INF = 2e9 + 1;
int arr[100000+10];
int b[100000+10];
bool check[100000+10];
void solve()
{
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++)
	{
		cin>>arr[i];
	}
	memset(b, -1, sizeof(b));
	for (int i = 1; i <= n; i++)
	{
		if(arr[i]!=arr[i-1])
		{
           b[i]=arr[i-1];
		   check[b[i]]=1;
		}
		
	}
	check[arr[n]]=1;
	int k=0;
	for (int i = 1; i <= n; i++)
	{
		while(check[k])
		{
			k++;
		}
		if(b[i]==-1)
		{
			b[i]=k;
			check[b[i]]=1;
		}
		cout<<b[i]<<" ";
	}
	cout<<endl;
	

	// if(arr[0]==0)
	// {
	// 	cout<<-1<<endl;
	// 	return;
	// }

	// else
	// {
	// 	b[0]=arr[0]-1;
	// }
	return;
	
}
int main()
{
	solve();
	return 0;
}