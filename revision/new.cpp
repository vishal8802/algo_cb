#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;
    int n;
    int ch,a,b;
    int myteam,opponent;
    while(t--){
        myteam=0;
        opponent=0;
        cin>>n;
        while(n--){
            cin>>ch>>a>>b;
            if(ch==1){
                cout<<"YES";
                myteam=a;
                opponent=b;
            }
            else{
                if(a==b){
                    cout<<"YES";
                    myteam=a;
                    opponent=b;
                }
                else{
                    int m=min(a,b);
                    if(min(a,b)<myteam && max(a,b)>myteam){
                        cout<<"YES";
                        myteam=a;
                        opponent=b;
                    }
                    else{
                        cout<<"NO";
                    }
                }
            }
            cout<<endl;
        
        }
        
    }
    return 0;  
}