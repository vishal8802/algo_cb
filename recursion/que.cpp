#include<bits/stdc++.h>
using namespace std;

void print(int *p,int n){
    if(n==0) return;
    cout<<*p<<" ";
    print(++p,n-1);
}

int main(){
    int a[]={1,2,3,4,5,6};
    int n=6;
    print(a,6);
    cout<<endl;
    return 0;
}