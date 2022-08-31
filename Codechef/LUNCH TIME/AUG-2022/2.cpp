#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b;
	cin>>a>>b;
	
	if(a&1 and b&1 or !(a&1) and !(b&1)){
		cout<<"Yes"<<endl;
	}else cout<<"No"<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}