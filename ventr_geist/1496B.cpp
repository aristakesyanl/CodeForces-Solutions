#include <bits/stdc++.h>
using namespace std;
int arr[100000+10];
void solve()
{
	int n, k;
	cin >> n >> k;
	set<int> s;
	int mex = 0;
	int mx = 0;
	int p;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		s.insert(arr[i]);
		mx = max(mx, arr[i]);
	}
	sort(arr,arr+n);
	for (int i = 0; i < n; i++)
	{
		if(arr[i]==mex) mex++;
	}
	
	int m;
	//cout<<mx<<" "<<mex<<endl;
	if (mx+1 == mex)
	{
		m = n + k;
		cout << m << endl;
		return;
	}
	if (s.count((mx + mex + 1) / 2))
	{
		cout << n << endl;
		return;
	}
	else
	{
		if (k > 0)
		{
			cout << n + 1 << endl;
			return;
		}
		else
		{
			cout<<n<<endl;
			return;
		}
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