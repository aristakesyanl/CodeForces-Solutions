#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v1.push_back(k);
        sum1+=k;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> k;
        v2.push_back(k);
        sum2+=k;
    }

    for (int i = 0; i < n - 2; i++)
    {
        cin >> k;
        v3.push_back(k);
        sum3+=k;
    }

    cout<<sum1-sum2<<" "<<sum2-sum3<<endl;

   
}