#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>a(n+1,0);

	for(int i=0;i<n;i++){
		int x;cin>>x;
		a[x]=i+1;
	}

	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
		cout<<"\n";

    

	return 0;
}