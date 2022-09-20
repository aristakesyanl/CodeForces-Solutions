#include <iostream>
#include <string>
using namespace std;
string repeat(int n, string str)
{
    string s;
    for (int i = 0; i < n; i++)
    {
        s += str;
    }
    return s;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    string s, t;
    cin >> s >> t;
    int slen = s.size();
    int tlen = t.size();

    int k = lcm(slen, tlen);
    string s1=repeat(k/slen, s);
    string t1=repeat(k/tlen, t);
    for (int i = 0; i < k; i++)
    {
        if(s1!=t1)
        {
            cout<<-1<<endl;
            return;
        }
    }

    cout<<s1<<endl;
    return;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}