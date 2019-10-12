#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n,int k=3){
    if(n==0) return 1;
    if(n<0) return 0;
    int ans=0;
    for(int p=1;p<=k;p++){
        ans+=noOfWays(n-p,k);
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<noOfWays(n,k)<<endl;
    return 0;
}