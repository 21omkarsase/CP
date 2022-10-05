#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	map<int,vector<int>>m;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x].emplace_back(i);
	}
	set<pair<int,int>>ans;
	for(auto i:m){
		if(i.second.size()==1){
			ans.insert({i.first,0});
		}
		else if(i.second.size()==2){
			ans.insert({i.first,(i.second[1]-i.second[0])});
		}
		else{
			int pd=i.second[1]-i.second[0];
			bool flag=true;
			for(int j=2;j<i.second.size();j++){
				if(i.second[j]-i.second[j-1]!=pd){
					flag=false;
					break;
				}
			}
			if(flag){
				ans.insert({i.first,pd});
			}
		}
	}
	cout<<ans.size()<<"\n";
	for(auto i:ans){
		cout<<i.first<<" "<<i.second<<"\n";
	}
	return 0;
}