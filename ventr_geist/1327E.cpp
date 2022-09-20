#include <iostream>
using namespace std;
#define ll long long
ll int const mod = 998244353;
ll int arr[200005];
int main()
{
    arr[0] = 1;
    for (int i = 1; i < 200005; i++)
    {
        arr[i] = (arr[i - 1] * 10) % mod;
    }

    /*for(int i=0; i<200; i++)
    cout<<arr[i]<<endl;*/

    int n;
    cin >> n;
        for (int i = 1; i < n; i++)
        {
            ll int res = 0;
            res += (180 * arr[n - i - 1])%mod;
            res +=((n - i - 1) * 81* arr[n - i - 1])%mod;
            res=res%mod;
            cout<<res<<" ";
           
        }

        cout<<10<<endl;
    

    return 0;
}