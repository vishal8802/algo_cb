#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *A,int n){

    if(n==0||n==1){
        return true;
    }
    bool kyaaagesortedmila=isSorted(A+1,n-1);
    if(A[0]<=A[1] && kyaaagesortedmila) return true;
    return false;
}


int main(){
    int a[]={1,2,3,4,9,6,7};
    int n=7;
    if(isSorted(a,n)) cout<<"yes";
    else cout<<"no";
    cout<<endl;
    return 0;
}