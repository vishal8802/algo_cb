#include<bits/stdc++.h>
using namespace std;

int b[1000][1000];
char a[1000][1000];
int n,m;
bool isSafe(int x,int y){
  if(x>=0 && x<n && y>=0 && y<m && a[x][y]=='O')
    return true;
  return false;
}
bool makePath(int i,int j){

  if(i==n-1&&j==m-1){
      b[i][j]=1;
      return true;

  }
  if(isSafe(i,j)==true){
    b[i][j]=1;
    if(makePath(i,j+1)==true) return true;
    if(makePath(i+1,j)==true) return true;
    b[i][j]=0;
    return false;
  }
  return false;
}

void print(){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
      cout<<b[i][j]<<" ";
    cout<<"\n";
  }
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  
  if(makePath(0,0))
    print();
  else
    cout<<"-1";

}