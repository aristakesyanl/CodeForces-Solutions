#include <iostream>
#include <algorithm>
 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, a, b,s,x1,y1;
        cin >> x >> y >> a >> b;
        x1 = max(x, y);
        y1 = min(x, y);
 
        if (2 * a <= b)
        {
            s=(x1 + y1) * a; 
            cout <<s<< endl;
        }
 
        else
        {
            s=(x1 - y1) * a + y1 * b;
            cout <<s<< endl;
        }
    }
 
    return 0;
}