# include <iostream> 
#include <algorithm>
using namespace std; 
  
/* if x is present in arr[] then returns the count 
    of occurrences of x, otherwise returns 0. */
int count(int arr[], int x, int n) 
{     
  /* get the index of first occurrence of x */
  int *low = lower_bound(arr, arr+n, x); 
  
  // If element is not present, return 0 
  if (low == (arr + n) || *low != x) 
     return 0; 
     
  /* Else get the index of last occurrence of x. 
     Note that we  are only looking in the  
     subarray after first occurrence */   
  int *high = upper_bound(low, arr+n, x);      
     
  /* return count */
  return high - low; 
} 
  
/* driver program to test above functions */

int sum(int arr[], int n)
{
  int sum=0;
  for (int i = 0; i < n; i++)
  {
      sum+=arr[i];
  }
  return sum;
}

int main() 
{
  int t;
  cin>>t;
  for (int j = 1; j <= t; j++)
  {
  int n; 
  cin>>n;
  int* arr=new int [n];
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);
  int p=count(arr,0,n);
  int s=sum(arr,n);
  int q=p+s;
  if(q==0) p=p+1;
  cout<<p<<endl;
  delete [] arr;
 
  }
  return 0;
 
}