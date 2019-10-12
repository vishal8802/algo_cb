#include<bits/stdc++.h>
using namespace std;

string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void haha(int n){
    if(n==0) return;
    haha(n/10);
    cout<<s[n%10]<<" ";

}

int main(){
    int n;
    cin>>n;
    haha(n);

    return 0;
}