#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int x,y;
    for (int i = 0; i < k; i++)
    {
        cin>>x>>y;
    }

    int x1,y1;
    for (int i = 0; i < k; i++)
    {
        cin>>x1>>y1;
    }

    cout<<n+m+m*n-3<<endl;

    string str;
    str+=string(n-1,'D')+string(m-1,'R');

    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
          str+=string(m-1,'L');
          if(i!=n-1)
          str+='U';
           
        }

        else
        {
          str+=string(m-1,'R');
          if(i!=n-1)
          str+='U';
        }
        
    }

    cout<<str<<endl;

    return 0;
}