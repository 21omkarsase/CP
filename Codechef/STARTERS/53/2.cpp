#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;cin>>n;
    
    if(n==1){
        cout<<0<<endl;
        return;
    }
    long long odd,even;
    if(n&1){
        odd=(n/2)+1;
        even=n/2;
    }else{
        odd=n/2;
        even=n/2;
    }
    
    cout<<((odd*even)*2)<<endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
