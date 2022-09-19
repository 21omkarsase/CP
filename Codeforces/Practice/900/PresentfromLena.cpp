#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	for(int j=0;j<=n;j++){

		for(int i=0;i<=(n-j-1);i++){
			cout<<" "<<" ";
		}
		if(j==0){
			for(int i=0;i<=j;i++){
				cout<<i;
			}
		}else{
			for(int i=0;i<=j;i++){
				cout<<i<<" ";
			}
		}
		
		for(int i=j-1;i>=0;i--){
			if(i!=0)
				cout<<i<<" ";
			else cout<<i;
		}
		cout<<"\n";
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<" "<<" ";
		}
		if(i==n-1){
			for(int j=0;j<=(n-i-1);j++){
				cout<<j;
			}
		}else{
			for(int j=0;j<=(n-i-1);j++){
				cout<<j<<" ";
			}
		}
		for(int j=n-i-2;j>=0;j--){
			if(j!=0)
				cout<<j<<" ";
			else cout<<j;
		}
		cout<<"\n";
	}
	
	return 0;
}