#include<bits/stdc++.h>
using namespace std;


bool lsearch(int a[],int index,int n,int key){
    if(index==n) return false;

    if(a[index]==key)
        return true;
    lsearch(a,index+1,n,key);
}

int firstIndex(int a[],int index,int n,int key){
    if(index==n) return -1;
    if(a[index]==key) return index;
    return firstIndex(a,index+1,n,key);
}

int lastIndex(int a[],int index,int n,int key){
    if(index==n) return -1;
    if(a[index]==key){
        int pehlewalaindex=index;
        int lastwalaindex=lastIndex(a,index+1,n, key);
        if(lastwalaindex>pehlewalaindex)
            return lastwalaindex;
        else
            pehlewalaindex;
    }
    return lastIndex(a,index+1,n,key);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    int key=6;
    // cin>>key;
    cout<<lsearch(arr,0,n,key);
    

    return 0;
}