#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x;cin>>x;
	if(abs(x-1)<=abs(100-x))cout<<"LEFT"<<"\n";
	else if(abs(x-1)>abs(100-x))cout<<"RIGHT"<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}