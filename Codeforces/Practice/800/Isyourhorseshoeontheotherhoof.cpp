#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;

	unordered_map<int,int>m; 
	m[a]++,m[b]++,m[c]++,m[d]++; 

	int ans=0;

	for(auto i:m){
		if(i.second>1)ans+=(i.second-1);
	}

	cout<<ans<<endl;

	return 0;
}