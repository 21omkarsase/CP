#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n ;cin>>n;

	long long cnt=0;
	cnt+=n;

	int f=n/3;

	cnt=cnt+(f*4);
	long long x=n-f;

	if(n%2==0)
		cnt+=((x/2)+1);
	else cnt+=((x/2));
	
	cout<<cnt<<endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}