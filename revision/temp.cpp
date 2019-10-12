#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    m["abc"]=5;
    m["ac"]=5;
    m["abcd"]=5;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
    
}