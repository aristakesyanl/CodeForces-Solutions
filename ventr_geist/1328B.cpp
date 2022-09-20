#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    const int count = 100010;
    int arr[count];
    arr[1] = 1;
    for (int i = 2; i < count; i++)
    {
        arr[i] = arr[i - 1] + i;
    }

    /*for (int i = 1; i <12 ; i++)
    {
        cout<<arr[i]<<" ";
    }*/

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            string str(n - 2, 'a');
            str += "bb";
            cout << str << endl;
        }

        else
        {
            string str(n, 'a');
            int num = n * (n - 1) / 2;
            for (int i = 1; i < n; i++)
            {
                if (k <= arr[i])
                {
                   str[n-i-1]='b';
                   k=k-arr[i-1];
                   str[n-k]='b';
                   cout<<str<<endl;
                   i=n;
                }
            }
           
        }
    }

    return 0;
}