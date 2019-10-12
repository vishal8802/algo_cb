#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char s,char h,char d){
    if(n==0) return;
    towerOfHanoi(n-1,s,d,h);
    cout<<"moving "<<n<<" th disc "<<s<<" to "<<d<<endl;
    towerOfHanoi(n-1,h,s,d);
}

int main(){
    int n;
    cin>>n;
    char source='A',helper='B',destination='C';
    towerOfHanoi(n,source,helper,destination);
    return 0;
}