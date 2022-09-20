#include<bits/stdc++.h>
using namespace std;
//-----------------------------------------
#define sz(x) ((int)(x).size())
typedef long long ll;
 
//----------------------------------------------
const int inf = 2e9;
const int mod = 998244353;
const int N = 1000+10;
 
//----------------------------------------------
int arr[N][N];
bool vis[N][N]={false};
//----------------------------------------------
int check(int x, int y){
    int col=-1;
    for(int dx=0; dx<2;dx++){
        for(int dy=0; dy<2; dy++){
            if(arr[x+dx][y+dy]!=-1){
                if(col!=-1 && col!=arr[x+dx][y+dy]) return -1;
                col=arr[x+dx][y+dy];
            }
        }
    }
 
    if(col==-1) return 1;
    return col;
 
}
 
 

int main(int argc, char *argv[]) {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
 
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    queue <pair<pair<int, int>,int>> q;
    //stack<pair<pair<int, int>, int>> ans;
    vector<pair<pair<int,int>,int>> ans;
    //set<pair<int,int>> s;
 
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
 
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            if(arr[i][j]==arr[i+1][j]&&arr[i][j]==arr[i][j+1]&&arr[i][j]==arr[i+1][j+1]){
                q.push(make_pair(make_pair(i,j),arr[i][j]));
                vis[i][j]=true;
            }
        }
    }
 
    int cnt=0;
    
  
    while(!q.empty()){
        int x=q.front().first.first;
        int y=q.front().first.second;
        int c=q.front().second;
        //cout<<x+1<<" "<<y+1<<" "<<c<<endl;
        q.pop();
        
        ans.push_back(make_pair(make_pair(x+1,y+1),c));
        cnt++;
        for(int dx=0; dx<2; dx++){
            for(int dy=0; dy<2; dy++){
                arr[x+dx][y+dy]=-1;
            }
        }

        for(int x1=x-1;x1<=x+1; x1++)if(x1>=0 && x1<n-1)
        {
            for(int y1=y-1; y1<=y+1;y1++)if(y1>=0 && y1<m-1)
            {
                int col=check(x1,y1);
                if(col!=-1 && !vis[x1][y1]){
                    q.push(make_pair(make_pair(x1,y1),col));
                    vis[x1][y1]=true;
                }
            }
        }
 
       
 
    }
 
    
    if(cnt<(n-1)*(m-1)){
        cout<<-1<<endl;
    }
    else{

        cout<<ans.size()<<endl;
        for(int i=ans.size()-1; i>=0; i--){
            cout<<ans[i].first.first<<" "<<ans[i].first.second<<" "<<ans[i].second<<endl;
        }
    }
 
    
    return 0;
}