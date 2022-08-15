#include <bits/stdc++.h>
using namespace std;

long long getModifiedX(int x){
    long long cnt=0;
    while(x){
        x/=10;cnt++;
    }
    long long ans=pow(10,cnt);
    // cout<<cnt<<endl;
    // cout<<ans<<endl;
    while(ans%2==0){
        ans/=2;
    }
    // cout<<ans<<endl;
    return ans;
}

void solve(){
    long long x;cin>>x;
    
    long long y=getModifiedX(x);
    // long long n=(x/2);
    long long s=1,e=y;
    
    while(s<=e){
        long long sum=2*(s+e)+(s*e);
        if(sum==x){
            cout<<"YES"<<endl;
            // cout<<s<<" "<<e<<endl;
            return;
        }else if(sum>x){
            e--;
        }else s++;
    }
    cout<<"NO"<<endl;
}

int main()
{
    // int t;cin>>t;
    
    // while(t--)
        solve();
}
