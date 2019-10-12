#include<bits/stdc++.h>
using namespace std;

int sum(int *a,int n){
    int s=0;
    for(int i=0;i<5;i++){
        s+=*(a+i);
    }
    return s;
}
int main(){

    int x[5]={1,2,3,4,5};
    // int *a=end(x);
    // cout<<*a;
    // cout<<end(x);
    // for(auto i:x){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
      // for(int *p=x;p!=end(x);++p){
    //     cout<<*p<<" ";
    // }
    // cout<<x<<endl;
    // cout<<end(x)-1<<endl;
    // cout<<&x[4];

    // for(int *p=x;p!=end(x);++p){
    //     cout<<*p<<" ";
    // }
    // cout<<sum(x,5);
    // int y=5;
    // cout<<&(*y);
    // cout<<x<<endl;
    // cout<<&x[0]+1<<endl;
    // cout<<&x+1<<endl;


// int x=10;
// int *y=&x;
// cout<<*y+1;
    // char ch='A';
    // char *chptr=&ch;
    // cout<<ch<<endl;
    // cout<<&chptr<<endl;
    // cout<<(int*)chptr<<endl;

    char ch[]={'h','e','l','l','o','\0'};
    char ch2[]="haha";
    cout<<ch2<<endl;
    cout<<sizeof(ch2);
    cout<<endl;


    return 0;
}