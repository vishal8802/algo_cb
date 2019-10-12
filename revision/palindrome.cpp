#include<bits/stdc++.h>
using namespace std;

bool checkpalin(char a[]){
    // int f[26]={0};

    // for(int i=0;i<strlen(a);i++){
    //     f[65-a[i]]++;
    // }
    // if(strlen(a)%2==1){
    //     f[a[strlen(a)/2]]++;
    // }
    // for(int i=0;i<26;i++){
    //     if(f[i]%2==1)
    //         return false;
    // }
    // return true;
    // int i=0,j=strlen(a);
}
int main(){

    char a[100];
    cin.getline(a,100);
    
    cout<<checkpalin(a);
    return 0;
}