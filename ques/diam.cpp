#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<i;
        }
        for(int l=i-1;l>0;i--){
            cout<<" ";
        }
        for(int o=i-2;o>0;o--){
            cout<<" ";
        }
        for(int m=1;m<=i;m++){
            cout<<m;
        }
        cout<<"\n";
    }
    return 0;
}