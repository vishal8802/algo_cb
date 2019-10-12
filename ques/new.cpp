#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int odd=0,even=0;
    for(int i=s.length()-1;i>=0;i--){
        if(i%2==0) even+=s[i]-48;
        else odd+=s[i]-48;
    }
    if(!(s.length()%2==0)) cout<<even<<endl<<odd;
    else cout<<odd<<endl<<even;
    
    return 0;
}