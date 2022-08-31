#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	if((a+b)/2<35)cout<<"Fail"<<endl;
	else if((c+b)/2<35)cout<<"Fail"<<endl;
	else if((a+c)/2<35)cout<<"Fail"<<endl;
	else cout<<"Pass"<<endl;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}