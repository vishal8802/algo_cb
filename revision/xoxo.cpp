#include<bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;
    int i=0,j=0;
    char a[n][n];
    bool flag=true;
    int cs=0,ce=n-1,rs=0,re=n-1;
    while(rs<=re && cs<=ce){
        for(i=cs;i<=ce;i++){
            if(flag) a[rs][i]='o';
            else a[rs][i]='x';
        }
        rs++;
        for(i=rs;i<=re;i++){
            if(flag) a[i][ce]='o';
            else a[i][ce]='x';
        }
        ce--;
        for(i=ce;i>=cs;i--){
            if(flag) a[re][i]='o';
            else a[re][i]='x';
        }
        re--;
        for(i=re;i>=rs;i--){
            if(flag) a[i][cs]='o';
            else a[i][cs]='x';
        }
        cs++;
        flag=!flag;
        
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}