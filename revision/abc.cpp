#include<bits/stdc++.h>
using namespace std;

bool match(char ch[],char key[]){
    if(strlen(ch)!=strlen(key))
        return false;

    int j;
    for(j=0;j<strlen(ch);j++){
        if(ch[j]!=key[j])
            return false;
    }
    return true;
}

int main(){

    char s[4][100]={"delhi","noida","coding","blocks"};
    char key[100];
    cin>>key;
    int i;
    for(i=0;i<4;i++){
        if(match(s[i],key)){
            cout<<"found"; break;

        }
    }
    if(i==4){
        cout<<"not found";
    }
    return 0;
}