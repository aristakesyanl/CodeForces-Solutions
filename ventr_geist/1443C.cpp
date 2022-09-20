#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
pair<long long int,long long  int> v[200000+10];
void solve(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first;
    }

    for (int i = 0; i < n; i++)
    {
        cin>>v[i].second;
    }
    sort(v, v+n);
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=v[i].second;
    }
    long long int mntime=min(v[n-1].first,sum);
    long long int total=0;
    long long int comp;
    for (int i = n-2; i >=0; i--)
    {
        total+=v[i+1].second;
        comp=max(v[i].first,total);
        mntime=min(mntime,comp);
    }


    
    
    // int mntime=min(v[n-1].first;
    // int sum=0;
    // int total;
    // for (int i = n-1; i >= 0; i--)
    // {
    //    total=max(v[i].first,sum);
    //    mntime=min(mntime,total);
    //    sum+=v[i].second;
    // }
    cout<<mntime<<endl;
    
    
    

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}