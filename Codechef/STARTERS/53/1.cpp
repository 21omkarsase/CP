#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w,x,y,z;cin>>w>>x>>y>>z;
    
    if(x==w or y==w or z==w or (x+y==w) or (y+z==w) or (x+z==w) or (x+y+z==w)){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
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
