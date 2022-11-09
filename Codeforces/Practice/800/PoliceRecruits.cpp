#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int>v(n,0);
	for(auto &i:v)cin>>i;

	int ans=0,availablePoice=0;
    
    for(int i=0;i<n;i++){
    	if(v[i]>=1){
    		availablePoice+=v[i];
    	}

    	if(v[i]==-1){
    		if(availablePoice>0)
    			availablePoice--;
    		else
    			ans++; 
    	}
    }

    cout<<ans<<"\n";
	return 0;
}