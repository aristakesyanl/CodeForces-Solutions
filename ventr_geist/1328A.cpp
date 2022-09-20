#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k = a % b;
        if (k == 0)
            cout << 0 << endl;
        else
            cout << b - k << endl;
    }
    return 0;
}