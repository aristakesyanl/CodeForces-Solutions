#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;
const int INF = 2e9 + 1;
int alice[200000 + 10];
int salice[200000 + 10];
int bob[200000 + 10];
int sbob[200000 + 10];
int both[200000 + 10];
int sboth[200000 + 10];
void solve()
{
	int n, k, t, a, b;
	cin >> n >> k;
	int kalice = 0, kbob = 0, kboth = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> t >> a >> b;
		if (a && !b)
		{
			alice[kalice++] = t;
		}
		if (!a && b)
		{
			bob[kbob++] = t;
		}
		if (a && b)
		{
			both[kboth++] = t;
		}
	}
	sort(alice, alice+kalice);
	sort(bob, bob+kbob);
	sort(both, both+kboth);
	for (int i = 0; i < kalice; i++)
	{
		salice[i+1]=alice[i]+salice[i];
	}

	for (int i = 0; i < kbob; i++)
	{
		sbob[i+1]=bob[i]+sbob[i];
	}

	for (int i = 0; i < kboth; i++)
	{
		sboth[i+1]=both[i]+sboth[i];
	}
	// for (int i = 0; i < kalice; i++)
	// {
	// 	cout<<alice[i]<<" ";
	// }
	// cout<<endl;
	// for (int i = 0; i < kbob; i++)
	// {
	// 	cout<<bob[i]<<" ";
	// }
	// cout<<endl;
	// for (int i = 0; i < kboth; i++)
	// {
	// 	cout<<both[i]<<" ";
	// }
	// cout<<endl;
	

	int ans=INF;
	for (int i = 0; i <= kboth; i++)
	{
		if(k-i>kalice || k-i>kbob)
		{
			continue;
		}

		ans=min(sboth[i]+salice[k-i]+sbob[k-i],ans);
	}

	if(ans==INF)
	{
		cout<<-1<<endl;
		return;
	}
	cout<<ans<<endl;
	return;
	
}
int main()
{
	solve();
	return 0;
}