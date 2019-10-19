#include<bits/stdc++.h>
using namespace std;
int s=0,e=0;

void checkSubArray(int i,int j,int a[]){
    int ones=0,zeros=0;
    for(int k=i;k<=j;k++){
        if(a[k]==1) ones++;
        else zeros++;
    }
    if(ones==zeros){
        s=i;
        e=j;
    }

    
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        s=0,e=0;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>i;j--){
                checkSubArray(i,j,a);
                if(e>0) break;
            }
        }
        
        if(s==0||e==0) cout<<"none";
        else cout<<s-1<<" "<<e-1<<"\n";
    }

    return 0;
}
