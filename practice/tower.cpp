#include<bits/stdc++.h>
using namespace std;

void tof(int n,string s,string h,string d){
    if(n==0) return;

    tof(n-1,s,d,h);
    cout<<"Moving disc "<<n<<" : "<<s<<" -> "<<d<<endl;
    tof(n-1,h,s,d);
}

int main(){
    string s="Source",h="Helper",d="Destination";
    int n;
    cin>>n;
    tof(n,s,h,d);
    return 0;
}