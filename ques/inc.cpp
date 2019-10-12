#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    // int k1=n/2;
    // int k1=n/2;
    
    for(int i=1;i<=n;i++) cout<<"* ";
    cout<<endl;
    for(int i=1;i<=(n-2)/2+1;i++){
        for(int j=i;j<=(n-2)/2+1;j++)
            cout<<"* ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"  ";
        for(int j=(n-2)/2+1-i;j>=0;j--)
            cout<<"* ";
        cout<<endl;
        
    }
    int k=(n-2)/2;
    int x=0;
    for(int i=2;i<=k+1;i++){
        for(int j=i;j>0;j--)
            cout<<"* ";
        for(int j=0;j<2*i+1-x;j++)
            cout<<"  ";
        for(int j=0;j<=(n-2)/2+1-i;j++)
            cout<<"* ";
        cout<<"\n";
        x+=n/2;
    }

    for(int i=1;i<=n;i++) cout<<"*";
    
}