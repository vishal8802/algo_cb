#include<bits/stdc++.h>
using namespace std;

void rotate(char a[],int n);
int main(){
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);

    int f[26]={0};
    for(int i=0;i<strlen(a);i++){
        f[a[i]-97]++;
    }
    for(int i=0;i<strlen(b);i++){
        f[b[i]-97]--;
    }
   
    for(auto i:f){
        if(i!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    


    return 0;
}

