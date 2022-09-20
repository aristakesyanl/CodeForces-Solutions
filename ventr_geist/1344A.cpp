#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
int arr[200000 + 10];
void solve()
{
	int n,t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		arr[i]=0;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		t+=i;
		t=t%n;
		if(t<0) t+=n;
		arr[t]++;
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	for (int i = 0; i < n; i++)
	{
		if(arr[i]!=1)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	return;
	


	// for (ll i = 0; i < n; i++)
	// {
	// 	arr[i] = arr[i] + i;
	// 	arr[i] = arr[i] % n;
	// }
	// sort(arr, arr + n);
	// bool flag = true;
	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// for (int i = 1; i < n; i++)
	// {
	// 	if (arr[i] == arr[i - 1])
	// 		flag = false;
	// }
	// if (flag)
	// {
	// 	cout << "YES" << endl;
	// 	return;
	// }
	// cout << "NO" << endl;
	// return;
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