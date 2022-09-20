#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    long long int n, res = 2,k,p;
    cin >> n;
    p=n;
    for (int i = 1; i <= n - 1; i++)
    {
      res*=i;
      k=gcd(res,p);
      res/=k;
      p/=k;
    }

    cout<<res<<endl;
}