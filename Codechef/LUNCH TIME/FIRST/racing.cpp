#include <iostream>
using namespace std;
#define ll   long long int  
int main() {
	// your code goes here
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll x,t,m;
	    cin>>x>>t>>m;
	    t*=60;
	    m*=60;
	    ll req=0;
	    req+=min(x,t);
	    t-=min(x,t);
	    req+=t*2;
	    if(req<=m)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
