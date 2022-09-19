#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y;cin>>x>>y;

	int sum=x*3;

	if(x>=0 and y>=0){
		int rem=sum-y;
		if(y<=rem){
			cout<<0<<" "<<y<<" "<<rem<<endl;
		}else {
			cout<<(-1*(y-rem))<<" "<<y<<" "<<y<<endl;
		}
	}else if(x<0 and y<0){
		int rem=sum-y;
		if(rem<=y){
			cout<<rem<<" "<<y<<" "<<0<<endl;
		}else{
			cout<<y<<" "<<y<<" "<<(rem-y)<<endl;
		}
	}
	else if(x<0 and y>=0){
		int rem=sum-y;
		if(rem<=y){
			cout<<rem-y<<" "<<y<<" "<<y<<endl;
		}else{
			cout<<0<<" "<<y<<" "<<rem<<endl;
		}
	}else{
		int rem=sum-y;
		if(rem>y){
			cout<<y<<" "<<y<<" "<<(rem-y)<<endl;
		}else{
			cout<<rem<<" "<<y<<" "<<0<<endl;
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}