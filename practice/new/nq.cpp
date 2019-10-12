#include<bits/stdc++.h>
using namespace std;

bool isSafe(int b[][100],int i,int j,int n){
        for(int k=i;k>=0;k--){
        if(b[k][j]==1) return false;
    }
    int x=i; int y=j;
    while(x>=0 && y>=0){
        if(b[x][y]==1) return false;
        x--;
        y--;
    }
    x=i; y=j;
    while(x>=0 && y<n){
        if(b[x][y]==1) return false;
        x--;
        y++;
    }
    return true;
}
int cn=0;



bool solve(int b[][100],int i,int n,int a[]){

    if(i==n){
        cn++;
        return false;
    }

    for(int j=0;j<n;j++){
        if(isSafe(b,i,j,n)){
            b[i][j]=1;
            a[i]=j+1;
            bool was_right=solve(b,i+1,n,a);
            if(was_right) return true;
            b[i][j]=0;
        }
    }
    return false;
}
int main(){
    int b[100][100]={0};
    int a[100]={0};
    int n;
    cin>>n;
    solve(b,0,n,a);
    cout<<cn;
    return 0;
}