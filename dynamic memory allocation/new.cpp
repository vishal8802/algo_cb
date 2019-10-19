#include<bits/stdc++.h>
using namespace std;

int  *createArray(int n){
    int *newarr=new int[n];
    for(int i=1;i<=10;i++) newarr[i-1]=i*i;
    return newarr;
}

int main(){
    int *a=new int;
    *a=10;

    int *arr=new int[10];
    for(int i=0;i<10;i++) arr[i]=i;
    for(int i=0;i<10;i++) cout<<arr[i]<<" ";
    cout<<endl;
    int *app=createArray(5);
    for(int i=0;i<10;i++) cout<<app[i]<<" ";
    cout<<endl;
    int r=4,c=4;
    int **twod=new int*[r];
    for(int i=0;i<r;i++){
        twod[i]=NULL;
    }
    for(int i=0;i<r;i++){
        twod[i]=new int[c];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) twod[i][j]=(i+1)*(j+1);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout<<twod[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<r;i++) delete []twod[i];
    delete []twod;
    delete a;
    delete []app;
    return 0;
}