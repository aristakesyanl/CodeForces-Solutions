#include <iostream>
using namespace std;
bool arr1[300] = {false};
//int arr2[110];

int main()
{
    int p;
    cin >> p;
    while (p--)
    {
        bool arr1[300] = {false};
        int n, x, t;
        cin >> n >> x;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            arr1[t] = true;
        }

       int j;
       for (j = 1; (x>0 || arr1[j]==1) ; j++)
       {
           {
               if(arr1[j]==false)
               {
                   x--;
               }
           }
       }

       cout<<j-1<<endl;
       
    }

    return 0;
}