#include<bits/stdc++.h>
using namespace std;


void sub(char in[],char out[],int i,int j){

    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<" , ";
        return;
    }
    out[j]=in[i];
    sub(in,out,i+1,j+1);
    sub(in,out,i+1,j);


}
int main(){

    char in[100],out[100];
    cin>>in;
    sub(in,out,0,0);

    return 0;
}