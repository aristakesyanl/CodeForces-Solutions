#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;
bool check[22000];
int prime[22000];
void sieve(int& count)
{
    memset(check, true, sizeof(check));
    for (int p = 2; p < 22000; p++)
    {
        if (check[p] == true)
        {
            prime[count++]=p;
            for (int i = 2 * p; i <22000; i += p)
            {
                check[i] = false;
            }
        }
    }
}
void solve()
{
    int d;
    cin >> d;
    int first;
    int second;
    for (int i = 0; i < 22000; i++)
    {
        if(prime[i]>=1+d)
        {
            first=prime[i];
            break;
        }
    }

    for (int i = 0; i < 22000; i++)
    {
        if(prime[i]>=first+d)
        {
            second=prime[i];
            break;
        }
    }
    //cout<<first<<" "<<second<<endl;
    cout<<first*second<<endl;
}   

int main()
{
    int count=0;
    sieve(count);
    // for (int i = 0; i < 100; i++)
    // {
    //     cout<<prime[i]<<" ";
    // }
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}