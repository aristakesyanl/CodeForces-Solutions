#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i =1 ; i <=t; i++)
    {
       int n;
       cin>>n;
       int * arr=new int [2*n];
       for (int i = 0; i < 2*n; i++)
       {
           cin>>arr[i];
       }

       sort(arr,arr+2*n);

       int dif=arr[n]-arr[n-1];

       cout<<dif<<endl;
       
       delete [] arr;

    }

    return 0;
    

}