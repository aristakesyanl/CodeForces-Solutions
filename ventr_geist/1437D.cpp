#include <iostream>
#include <algorithm>
using namespace std;
int arr[200000 + 10];
void solve()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int level = 1;
	int count = 0;
	int minheight = 1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			if (level > 1)
			{
				level--;
			}
			else
			{
				minheight++;
				level = count;
				count = 0;
			}
		}
		count++;
	}
	cout << minheight << endl;
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
}