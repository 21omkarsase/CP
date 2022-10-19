#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
    if(n==3){
    	cout<<-1<<"\n";
    	return;
    }
	int mid=n/2;
	if(!(n&1)){
		for(int i=n;i>mid;i--){
			cout<<i<<" ";
		}
		for(int i=1;i<=mid;i++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}else{
		int j=n;
		int i=1;
		while(i<=mid){
			cout<<j<<" ";
			i++;j--;
		}

		for(int k=1;k<=j;k++){
			cout<<k<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}