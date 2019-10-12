#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector <int> V[1001];
bool vis[1001];
map <int,int> dist;
bool girls[1001];
void dfs(int n,int d){
    vis[n]=true;

    if(girls[n]) dist[n]=d;
    for(auto child:V[n]){
        if(!vis[child]){

            dfs(child,d+1);

        }
    }
}

int main(){
    int mini=10001;
    int n,x,y,q;
    cin>>n;
    for(int i=1;i<=n-1;i++){
        cin>>x>>y;
        V[x].pb(y);
        V[y].pb(x);
    }
   

    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x;
        girls[x]=true;
    }
    dfs(1,0);
    // for(auto i:dist){
    //     cout<<i.first<<" "<<i.second;
    //     cout<<endl;
    // }
    int ans=0;
    for(auto i:dist){

        if(mini>i.second){
            mini=i.second;
            ans=i.first;
        }
    }
    cout<<ans;

}