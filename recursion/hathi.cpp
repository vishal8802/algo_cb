#include<bits/stdc++.h>
using namespace std;


int noOfWays(int i,int j){
    if(i==0 && j==0) return 1;
    if(i<0 || j<0) return 0;
    int ans=0;
    for(int k=1;k<=i;k++) ans+=noOfWays(i-k,j); 
    for(int k=1;k<=j;k++) ans+=noOfWays(i,j-k); 
    return ans;

}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<noOfWays(n,m)<<endl;
    return 0;
}