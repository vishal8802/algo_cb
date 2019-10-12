#include<bits/stdc++.h>
using namespace std;

void merge(int x[],int y[],int a[],int s,int e ){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    while(i<=mid && j<=e){
        if(x[i]<y[j]){
            a[k]=x[i];
            k++; i++;
        }
        else{
            a[k]=y[j];
            k++; j++;
        }  
    }
    while(i<=mid){
        a[k]=x[i];
        k++; i++;
    }
    while(j<=e){
        a[k]=y[j];
        k++; j++;
    }
}

void mergeSort(int a[],int s,int e){
    if(s==e) return;

    int mid=(s+e)/2;
    int x[100],y[100];
    for(int i=s;i<=mid;i++){
        x[i]=a[i];
    }
    for(int i=mid+1;i<=e;i++){
        y[i]=a[i];
    }
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);


    merge(x,y,a,s,e);


}

int main(){

    int a[]={34,56,24,68,45,24,7,78,34,73};
    int n=10;
    mergeSort(a,0,n-1);
    for(auto x:a){
        cout<<x<<" ";
    }
    return 0;
}