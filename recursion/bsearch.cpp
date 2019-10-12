#include<bits/stdc++.h>
using namespace std;


int bSearch(int a[],int l,int r,int key){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(a[mid]==key)
        return mid+1;
    else if(a[mid]>key)
            return bSearch(a,l,mid-1,key);
    
    return bSearch(a,mid+1,r,key);

}
 int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    cout<<bSearch(a,0,9,6);
    return 0;
 }