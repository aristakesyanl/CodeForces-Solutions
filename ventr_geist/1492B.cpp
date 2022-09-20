#include <bits/stdc++.h>

using namespace std;

int powMe(int x, int y)
{
	int sum = 1;
	for (int i = 0; i < y; i++)
	{
		sum *= x;
	}
	return sum;
}

void solve()
{
	int n;
	int summ = 0;
	int p[100000 + 1];
	//bool s[100000 + 10]={false};
	set<int> s;
	int sorted[100000 + 1];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		sorted[p[i]] = i;
	}
	int k = n;
	// for (int i = 0; i < n; i++)
	// {
	// 	s[i] = 1;
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	sorted[i] = distance(p, find(p, p + n, i + 1));
	// }
	// int j = n;
	// int k = n;
	// while (1)
	// {
	// 	if (max == 0)
	// 	{
	// 		max = sorted[n - 1];
	// 		for (int h = max; h < n; h++)
	// 		{
	// 			--j;
	// 			cout << p[h] << " ";
	// 			s[h] = 0;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		int g = n;
	// 		bool t = true;
	// 		while (t)
	// 		{
	// 			if (s[sorted[g]])
	// 			{
	// 				max = sorted[g];
	// 				t = false;
	// 				 cout << "   NUM : " << p[g] << "  MAX : " << max << "   G : " << g << "  SMTH : " << p[max] << endl;
	// 			}
	// 			else
	// 			{
	// 				g--;
	// 				 cout << p[g] << "FUCKKK" << endl;
	// 			}
	// 		}
	// 		for (int h = max; h < n; h++)
	// 		{
	// 			--j;
	// 			cout << p[h] << " ";
	// 			s[h] = 0;
	// 		}
	// 	}
	// 	if (n == 0)
	// 	{
	// 		cout << endl;
	// 		return;
	// 	}
	// 	n = max;
	// }
	 int mx;
	 int index;
	for (int i = n; i >= 1; i--)
	{
		//cout<<!s.count(i) << "   " << k << endl;
		if (!s.count(i) && k!=0)
			{
				mx = i;
				index = sorted[mx];
				//cout << index << endl;
				for (int j = index; j < k; j++)
				{
					s.insert(p[j]);
					cout << p[j] << " ";
				}
				k=index;
			}
		if(k==0)
		{
			cout<<endl;
			return;
		}
	}
	// while (1)
	// {
	// 	for (int i = index; i < k; i++)
	// 	{
	// 		s.insert(p[i]);
	// 		cout << p[i] << " ";
	// 	}
	// 	for (int i = 1; i <= n; i++)
	// 	{
	// 		if (!s.find(i)))
	// 			{
	// 				mx = i;
	// 				index = sorted(max);
	// 				k = index;
	// 			}
	// 	}
	// }
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