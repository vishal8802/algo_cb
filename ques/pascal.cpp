#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++){
        x=1;
        for(int j=n-i;j>0;j--)
            cout<<" ";
        for(int k=1;k<=i;k++){
            cout<<x<<" ";
            x=x*(i-k)/k;
        }
        cout<<"\n";
    }
}