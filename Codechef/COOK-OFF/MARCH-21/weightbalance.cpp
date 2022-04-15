#include<iostream>
using namespace std;

void solve()
{
    int w1,w2,x1,x2,M;
    cin>>w1>>w2>>x1>>x2>>M;
    
    int mini=w1+(x1*M);
    int maxi=w1+(x2*M);

        if( w2>=mini && w2<=maxi )
        {
            cout<<"1"<<endl;
        }
        
        else
        {
            cout<<"0"<<endl;
        }
}
signed main()
{
    int t=1;
    cin>>t;
    

    while(t--)
    {
        solve();
    }
    return 0;
}