#include<bits/stdc++.h>
using namespace std;

int sum(int *A,int n){
    if(n==0) return 0;
    return *A+sum(A+1,n-1);
}

int main(){
    int n;
    // cin>>n;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    cout<<sum(a,10)<<"\n";
    return 0;
}