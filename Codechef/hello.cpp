#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;cin>>x;
    // long long n=(x/2);
    // int s=1,e=x/2;
    
    // while(s<=e){
    //     int sum=2*(s+e)+(s*e);
    //     if(sum==x){
    //         cout<<"YES"<<endl;
    //         cout<<s<<" "<<e<<endl;
    //         return;
    //     }else if(sum>x){
    //         e--;
    //     }else s++;
    // }
    // cout<<"NO"<<endl;
    
    if(x<=4){
        cout<<"NO"<<endl;
        return;
    }
    bool flag=false;
    if(x%3==2 or x%4==0)
        flag=true;
    if(x>=11 and x%5==1)
        flag=true;
    if(x>=14 and x%6==2)
        flag=true;
    if(x>=17 and x%7==3)
        flag=true;
    if(x>=23 and x%9==5)
        flag=true;
    if(x>=26 and x%10==6)
        flag=true;
    if(x>=29 and x%11==7)
        flag=true;
    if(x>=32 and x%12==8)
        flag=true;
    
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main()
{
    // int t;cin>>t;
    
    // while(t--)
        solve();
}
