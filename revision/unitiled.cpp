#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[100];
    int j;
    cin.getline(a,100);
    
    for(int i=0;i<a[i]!='\0';i++){
        for(int j=i;i<a[j]!='\0';j++){
            for(int k=i;i<j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }
    return 0;
}
