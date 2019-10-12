#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<" "; 
        cout<<endl;
    } 
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++)
    //         cout<<a[j][i]<<" "; 
    //     cout<<endl;
    // }   

    // for(int i=0;i<c;i++){
    //         if(i%2==0){
    //             for(int j=0;j<r;j++){
    //                 cout<<a[j][i]<<" ";
    //             }

    //         }
    //         else{
    //             for(int j=r-1;j>=0;j--){
    //                 cout<<a[j][i]<<" ";
    //             }
    //         }
        
            

    // }
    int i,j;
    int sr=0,sc=0,ec=c-1,er=r-1;
    while(sr<=er && sc<=ec){
        for(i=sc;i<=ec;i++)
            cout<<a[sr][i]<<" ";
        sr++;
        for(i=sr;i<=er;i++)
            cout<<a[i][ec]<<" ";
        ec--;
        if(sr<er){
            for(i=ec;i>=sc;i--)
                cout<<a[er][i]<<" ";
            er--;
        }
        if(sc<ec){
            for(i=er;i>=sr;i--)
                cout<<a[i][sc]<<" ";
            sc++;
        }
    }


    return 0;
}