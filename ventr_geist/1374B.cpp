#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        int count2 = 0;
        int count3 = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            count2++;
        }

        while (n % 3 == 0)
        {
            n /= 3;
            count3++;
        }

        if (n == 1 && count2 <= count3)
        {
            cout << 2 * count3 - count2 << endl;
        }

        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}