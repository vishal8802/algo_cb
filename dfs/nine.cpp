#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector <int> V[300006];
bool visited[300006];
int cc=0;

void dfs(int n,int v){
    visited[n]=true;
    if(n!=v) cc++;
    for(auto child:V[n]){
        if(!visited[child]){
            dfs(child,v);
        }
    }
}
int main(){
    int n,x,y,u,v;
    cin>>n>>u>>v;
    for(int i=1;i<=n-1;i++){
        cin>>x>>y;
        V[x].pb(y);
        V[y].pb(x);
    }
   
    dfs(u,v);
    cout<<cc*2+1;
    return 0;
}