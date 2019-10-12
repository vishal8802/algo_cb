#include<bits/stdc++.h>
using namespace std;

bool isSafe(int a[10][10],int i,int j,int n){
    for(int k=i;k>=0;k--){
        if(a[k][j]==1) return false;
    }
    int x=i; int y=j;
    while(x>=0 && y>=0){
        if(a[x][y]==1) return false;
        x--;
        y--;
    }
    x=i; y=j;
    while(x>=0 && y<n){
        if(a[x][y]==1) return false;
        x--;
        y++;
    }
    return true;
}

void print(int a[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
// int ans[10][10];
bool solve(int a[10][10],int i,int n){

    if(i==n){
        print(a,n);
        cout<<endl;
        return false;
    }
    for(int j=0;j<n;j++){
        if(isSafe(a,i,j,n)){
            a[i][j]=1;
            bool was_that_right=solve(a,i+1,n);
            if(was_that_right) return true;
            a[i][j]=0;
        }
    }
    return !true;
}

int main(){
    int n;
    cin>>n;
    int a[10][10]={0};
    solve(a,0,n);
    return 0;
}