#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include<vector>
using namespace std;
long long int arr[100000+10];
void solve()
{
	long long int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	if(n==1)
	{
		cout<<1<<" "<<1<<endl;
		cout<<0<<endl;
		cout<<1<<" "<<1<<endl;
		cout<<0<<endl;
		cout<<1<<" "<<1<<endl;
		cout<<-1*arr[0]<<endl;
	}
	else
	{
		cout<<1<<" "<<1<<endl;
		cout<<-1*arr[0]<<endl;
		cout<<1<<" "<<n<<endl;
		cout<<0<<" ";
		for (int i = 1; i < n; i++)
		{
			cout<<-n*arr[i]<<" ";
		}
		cout<<endl;
		cout<<2<<" "<<n<<endl;
		for (int i = 1; i < n; i++)
		{
			cout<<(n-1)*arr[i]<<" ";
		}
		cout<<endl;
	}
	return;
	
}
int main()
{
	solve();
}