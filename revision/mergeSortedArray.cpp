#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=4,m=3;
    int a[n+m]={12,16,28,90};
    int b[m]={1,17,27};

    int i=n-1;
    int j=m-1;
    int k=m+n-1;
    while(i>=0&&j>=0){
        if(a[i]>b[j]){
            a[k]=a[i];
            k--;
            i--;
    
        }
        else{
            a[k]=b[j];
            k--;
            j--;    
    
        }
    }
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }
    

    for(int i=0;i<n+m;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}