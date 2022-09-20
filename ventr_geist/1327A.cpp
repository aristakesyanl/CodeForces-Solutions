#include<iostream>
using namespace std;
int ast(int n)
{
   int s=0;
   while(n>0)
   {
       if(n%2==0) s++;
       else break;
   }


    return s;
    
}
int main()
{
    int t;
    long long int n,k,c;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        cin>>n>>k;
        c=n-k*k;
        if(c%2==0 && c>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
    
}