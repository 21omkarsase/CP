#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;cin>>n>>k;
    
    if((k%4)==0 and !(n&1)){
        cout<<"NO"<<endl;
        return;
    }
    
    if(k&1){
        for(int i=1;i<n;i+=2){
            cout<<i<<" "<<i+1<<endl;
        }
    }else{
        for(int i=3;i<n;i+=4){
            cout<<i<<" "<<i+1<<endl;
        }
        for(int i=1;i<n;i+=4){
            cout<<i+1<<" "<<i<<endl;
        }
    }
}

int main()
{
    // int t;cin>>t;
    
    // while(t--)
        solve();
}