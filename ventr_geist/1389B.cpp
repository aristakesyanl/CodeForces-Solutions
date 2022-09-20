#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include<vector>
using namespace std;
long long int arr[100000+10];
//int sum[100000+10];
//int p[100000+10];
void solve()
{
	long long int n,k,t;
	cin>>n>>k>>t;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	long long int maxsum=0;
	for (int i = 0; i <= t; i++)
	{
		if(k>=2*i)
		{
			long long int p=k-2*i;
			long long int sum=arr[0];
			long long int mxpair=arr[p]+arr[p+1];
			for (int j = 1; j <=p; j++)
			{
			   sum+=arr[j];
			   mxpair=max(mxpair,arr[j]+arr[j-1]);
			}
			sum+=i*mxpair;
			//cout<<sum<<endl;
			maxsum=max(maxsum,sum);
			
		}
	   
	}
	cout<<maxsum<<endl;
	
	// int sum=0;
	// int maxsum=0;
	// for (int i = 0; i <= z; i++)
	// {
	// 	sum=arr[0];
	// 	int p=0;
	// 	for (int j = 1; j < k-2*z; j++)
	// 	{
	// 		p=max(arr[j]+arr[j-1],p);
	// 		sum+=arr[j];
	// 	}
	// 	sum+=i*p;
	// 	maxsum=max(maxsum,sum);	
	// }
	// cout<<maxsum<<endl;
	// int count=0;
	// int pa=0;
	// for (int i = 0; i < n; i++)
	// {
	// 	count+=arr[i];
	// 	sum[i]=count;
	// }
	// p[0]=0;
	// for (int i = 1; i < n; i++)
	// {
	// 	pa=max(pa,arr[i]+arr[i-1]);
	// 	p[i]=pa;
	// }
	
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<sum[i]<<" ";
	// }
	// cout<<endl;
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<p[i]<<" ";
	// }
	// cout<<endl;
    // int maxsum=0;
	// for (int i = 0; i <= t; i++)
	// {
	// 	if(2*t<=k)
	// 	{
	// 		maxsum=max(sum[k-2*i]+i*p[k-2*i],maxsum);
	// 	}
		
	// }
	//cout<<maxsum<<endl;
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