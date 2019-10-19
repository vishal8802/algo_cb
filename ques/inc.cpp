#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
  
    for(int i=1;i<=n;i++) cout<<"* ";
    cout<<endl;
    for(int i=1;i<=(n-2)/2+1;i++){
        for(int j=i;j<=(n-2)/2+1;j++) cout<<"* ";
        for(int j=1;j<=2*i-1;j++) cout<<"  ";
        for(int j=(n-2)/2+1-i;j>=0;j--) cout<<"* ";
        cout<<endl;
    }
    int k=(n-2)/2;

    for(int i=1;i<=k;i++){
        for(int j=0;j<=i;j++) cout<<"* ";
        for(int j=2*(k-i);j>=0;j--) cout<<"  ";
        for(int j=0;j<=i;j++) cout<<"* ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++) cout<<"* ";
    return 0;
}