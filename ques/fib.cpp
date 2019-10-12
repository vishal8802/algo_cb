#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<0<<endl;
    for(int i=2;i<=n;i++){
        for(int j=0;j<i;j++){
            a=b;
            b=a+b;
            cout<<a+b<<" ";

        }
    
        cout<<endl;
    }

    return 0;
}