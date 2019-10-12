#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int x;
    cin>>n>>x;
    long long int a[n];

    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        x-=a[i];
        count++;
        if(x<=0){
            break;
        }
    }
    cout<<count;
    return 0;
}