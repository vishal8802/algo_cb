#include<bits/stdc++.h>
using namespace std;


int length(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){}
    return i;
    
}

 void concat(char a[],char b[],char dest[]){
    int i=0;
    for(i=0;i<length(a);i++){
        dest[i]=a[i];
    }
    dest[i]=' ';
    for(i=0;i<length(b);i++){
        dest[i+length(a)+1]=b[i];
    }
    dest[length(a)+length(b)+1]='\0';


}


void readLine(char str[],int n,char delimiter='\n'){


    // char ch=cin.get();
    // int i=0;
    // while(ch!=delimiter){
    //     str[i++]=ch;
    //     ch=cin.get();z
    // }
    int i=0;
    for(i=0;i<n;i++){
        char temp=cin.get();
        if(temp==delimiter)
            break;
        str[i]=temp;
    }
    str[i]='\0';
}


int main(){
    char str[100];
    char str2[100];


    // cin>>str;
    // cin.getline(str,100);
    // cin.getline(str,100,'$');

    readLine(str,100);
    readLine(str2,100);
    // char str3[]=concat(str,str2);
    char str3[200];
    concat(str,str2,str3);
    cout<<str3;
    // readLine(str,100,'$');
    // cout<<str3<<endl;
    return 0;
}