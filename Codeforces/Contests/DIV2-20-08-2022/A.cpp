#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;cin>>n>>m;
    
    
    if(n==1 and m==1){
        cout<<0<<endl;
        return;
    }
    
    int mi=min(m,n);
    int ma=max(m,n);
    
    int ans=(ma-1)+(mi-1)+(mi);
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}