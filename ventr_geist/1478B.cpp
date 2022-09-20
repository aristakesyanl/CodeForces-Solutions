#include <iostream>
using namespace std;
int arr[10000 + 10];
void solve()
{
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 10 * d)
            cout << "YES" << endl;
        else
        {
            if (arr[i] < d)
                cout << "NO" << endl;
            else if (arr[i] % d == 0)
                cout << "YES" << endl;
            else
            {
                int flag = 1;
                while (arr[i] > 0)
                {
                    if ((arr[i] - 10) % d == 0 && (arr[i]-10) > 0)
                    {
                        flag=0;
                        arr[i]=0;
                    }
                    else
                    {
                        arr[i] -= 10;
                    }
                }
                if (flag)
                    cout << "NO" << endl;
                else cout<<"YES"<<endl;    
            }
        }
    }
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