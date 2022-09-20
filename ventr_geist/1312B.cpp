#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[110];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

        }

        sort(arr, arr+n);

        for (int i = n-1; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;
        
        
    }
}