#include<bits/stdc++.h>
using namespace std;

string S[]={" ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void print(char a[],char b[],int i,int j){
    if(a[i]=='\0'){
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    int index=a[i]-48;
    for(int k=0;S[index][k]!='\0';k++){
        b[j]=S[index][k];
        print(a,b,i+1,j+1);
    }

}

int main(){
    char a[100];
    char b[100];
    cin>>a;
    print(a,b,0,0);
    return 0;
}