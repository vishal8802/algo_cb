#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string a){
    int len=a.length();
    if(len%2==0){
        for(int i=0;i<len/2;i++){
            if(a[i]==a[len-i-1])
                continue;
            return false;
        }
    }
    else{
        for(int i=0;i<=len/2-1;i++){
            if(a[i]==a[len-i-1])
                continue;
            return false;
        }
    }
    return true;
}   

int main(){

    string a;
    cin>>a;
    

    cout<<boolalpha;
    cout<<isPalindrome(a);
    return 0;
    
}
