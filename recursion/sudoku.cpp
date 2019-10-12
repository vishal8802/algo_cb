#include<bits/stdc++.h>
using namespace std;

void print(int mat[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++) cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

bool isSafe(int number,int mat[][9],int n,int i,int j){
    for(int k=0;k<n;k++){
        if(mat[i][k]==number || mat[k][j]==number)
            return false;
    }
    int starti=(i/3)*3;
    int startj=(j/3)*3;

    for(int k=starti;k<starti+3;k++){
        for(int l=startj;l<startj+3;l++)
            if(mat[k][l]==number)
             return false;
    }
    return true;
}

bool solveSudoku(int mat[9][9],int n,int i,int j){
    if(i==n){
        print(mat);
        return true;
    }
    if(j==n) return solveSudoku(mat,n,i+1,0);
    if(mat[i][j]!=0) return solveSudoku(mat,n,i,j+1);

    for(int number=1;number<=9;number++){
        if(isSafe(number,mat,n,i,j)){
            mat[i][j]=number;
            if(solveSudoku(mat,n,i,j+1)) return true;
            mat[i][j]=0;  
        }
    }
    return false;

}

int main(){
    int mat[9][9]={{3, 0, 6, 5, 0, 8, 4, 0, 0},  
                    {5, 2, 0, 0, 0, 0, 0, 0, 0},  
                    {0, 8, 7, 0, 0, 0, 0, 3, 1},  
                    {0, 0, 3, 0, 1, 0, 0, 8, 0},  
                    {9, 0, 0, 8, 6, 3, 0, 0, 5},  
                    {0, 5, 0, 0, 9, 0, 6, 0, 0},  
                    {1, 3, 0, 0, 0, 0, 2, 5, 0},  
                    {0, 0, 0, 0, 0, 0, 0, 7, 4},  
                    {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    solveSudoku(mat,9,0,0);
    return 0;
}