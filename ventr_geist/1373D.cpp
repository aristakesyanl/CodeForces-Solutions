#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include<climits>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 1;
const int mod = 1e9 + 7;
ll arr[200000 + 10];
ll v1[200000 + 10];
ll v2[200000 + 10];
ll gcd(ll x, ll y)
{
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

void solve()
{
	ll n;
	cin >> n;
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		if (i % 2 == 0)
			sum += arr[i];
	}
	//cout<<sum<<endl;
	for (int i = 0; i <= n / 2 - 1; i++)
	{
		v1[i] = arr[2 * i + 1] - arr[2 * i];
	}
	int k=0;
	for (int i = 1; i < n; i+=2)
	{
		if(i+1<n)
		{
			v2[k++] = arr[i]-arr[i+1];
		}
	}
	// for (int i = 0; i < n/2; i++)
	// {
	// 	cout<<v1[i]<<" ";
	// }
	// cout<<endl;
	// for (int i = 0; i < n/2; i++)
	// {
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<endl;
	
	ll maxsumv1 = maxSubArraySum(v1, n / 2);
	ll maxsumv2 = maxSubArraySum(v2, n / 2);
	//cout<<maxsumv1<<" "<<maxsumv2<<endl;
	ll mx = max(maxsumv1, maxsumv2);
	mx = max(mx, 1ll*0);
	sum += mx;
	cout << sum << endl;
	return;
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