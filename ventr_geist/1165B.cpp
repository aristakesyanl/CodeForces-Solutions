#include <bits/stdc++.h>
using namespace std;
int arr[200000+10];
int main()
{
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }

   sort(arr,arr+n);

   int count=1;

   for (int i = 0; i < n; i++)
   {
       if(arr[i]>=count)
       count++;
   }

   cout<<count-1<<endl;
   
   
    return 0;
}