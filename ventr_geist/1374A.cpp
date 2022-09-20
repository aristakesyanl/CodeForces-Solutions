#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, sum;
        cin >> x >> y >> n;
        sum=n-y;
        sum/=x;
        sum*=x;
        sum+=y;
        cout << sum << endl;
    }
}