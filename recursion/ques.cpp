#include<bits/stdc++.h>
using namespace std;

int stringToInt(char ch[],int len){
    if(len==0) return 0;
    int lastTerm=ch[len-1]-'0';
    return stringToInt(ch,len-1)*10+lastTerm;
}
int main(){
    char ch[100];
    cin>>ch;
    int len=strlen(ch);
    cout<<stringToInt(ch,len);
    return 0;
}