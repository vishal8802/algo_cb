#include<bits/stdc++.h>
using namespace std;

void perm(char in[],int i){

    if(in[i]=='\0'){
        cout<<in<<endl;
        return;
    }
    for(int j=i;in[j]!='\0';j++){
        swap(in[i],in[j]);
        perm(in,i+1);
        swap(in[i],in[j]);

    }
}

int main(){

    char in[100];
    cin>>in;
    perm(in,0);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// void perm(string in,int i){

//     if(in[i]=='\0'){
//         cout<<in<<endl;
//         return;
//     }
//     for(int j=i;in[j]!='\0';j++){
//         swap(in[i],in[j]);
//         perm(in,i+1);
//         swap(in[i],in[j]);

//     }
// }

// int main(){

//     string in;
//     cin>>in;
//     perm(in,0);
//     return 0;
// }