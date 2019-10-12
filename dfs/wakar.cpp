#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define pb push_back
bool vis[1000];
int dist[1001];
vector<int> V[1001];
int cc;
void dfs(int n , int d)
{
    vis[n]= true;
    dist[n] = d;
    cc++;
    for(auto child : V[n]){
        if(!vis[child])
            dfs(child , d+1);
    }
}
int main()
{
    int mx = -1;
    int n , m , x , y;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        V[x].pb(y);
        V[y].pb(x);
    }

    int cnt = 0;
    // for(int i=1;i<=n;i++)
    // if(!vis[i])
    // {
    //     cout<<"In cc "<<cnt+1<<" elements are \n";
    //     cc = 0;
    //     dfs(1 , 0) , cnt++;
    //     mx = max(mx , cc);
    // }
    dfs(1 , 0);
    // cout<<cnt;
    // cout<<"\nMax = "<<mx;


}