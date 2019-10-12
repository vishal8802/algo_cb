#include<bits/stdc++.h>
#define pb push_back
using namespace std;

bool visited[1000];
vector <int> V[1000];
// int cc;

void dfs(int n){
    cout<<n<<" ";
    visited[n]=true;
    for(auto child:V[n]){
        if(!visited[child]){
            dfs(child);
        }
    }

}

int main(){

    int x,y,n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        V[x].pb(y);
        V[y].pb(x);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cout<<"in connected graph "<<cnt+1<<" elements are : ";
            // cc=0;
            dfs(i);
            cnt++;
            cout<<endl;
        }
    }


    return 0;
}