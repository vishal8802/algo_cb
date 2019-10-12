#include<bits/stdc++.h>
using namespace std;

bool ratInAMaze()

int main(){
    int n,m;
    cin>>n>>m;
    char maze[][5]={"OOXX","OOOO","OOXX","OOOO"};
    int sol[100][100]={0};
    ratInAMaze(sol,3,3,0,0);
    return 0;
}