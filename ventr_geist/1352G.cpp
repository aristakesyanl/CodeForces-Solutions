#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;
const int INF = 2e9 + 1;
void solve()
{
	int n;
	cin >> n;
	if (n == 2 || n == 3)
	{
		cout << -1 << endl;
		return;
	}

	else if (n == 4)
	{
		cout << "2 4 1 3" << endl;
		return;
	}
	else if (n == 5)
	{
		cout << "1 3 5 2 4" << endl;
		return;
	}
		
	else
	{
		for (int i = 1; i <= n; i += 2)
		{
			cout << i << " ";
		}
		if (n % 2 == 0)
		{
			cout << n - 4 << " " << n << " "<<n - 2<<" ";
			for (int i = n - 6; i >= 2; i -= 2)
			{
				cout << i << " ";
			}
			cout<<endl;
			return;
		}

		else
		{
			cout<<n-3<<" "<<n-1<<" ";
			for (int i = n-5; i >= 2; i-=2)
			{
				cout<<i<<" ";
			}
			cout<<endl;
			return;
		}
		
	}
}
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		solve();
	}
	return 0;
}