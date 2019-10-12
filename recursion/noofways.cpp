#include<bits/stdc++.h>
using namespace std;


int noOfWays(int i,int j){
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    return noOfWays(i-1,j)+ noOfWays(i,j-1);

}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<noOfWays(n,m)<<endl;
    return 0;
}