#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
	int n;cin>>n;
	int mn=INT_MAX,mx=INT_MIN;
	ll sum=0;
	vector<int>v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
		mn=min(mn,v[i]);
		mx=max(mx,v[i]);
		sum+=v[i];
	}
   int ans=INT_MIN;
    vector<int>segLens;
    bool flag=true;
    for(int i=0;i<n;i++){
    	int currSum=0,segLen=0;
    	while(currSum<mx){
    		currSum+=v[i];
    		i++;
    		segLen++;
    	}
    	i--;
    	if(currSum>mx){
    		flag=false;
    		break;
	 	}
    	segLens.push_back(segLen);
    }
    if(segLens.size()>=1){
    	for(auto i:segLens){
	    	ans=max(ans,i);
	    }
    }
    

    // if(!flag){
    	int i=0,j=n-1;
    	int left=0,right=0;
    	while(i<j){
    		
    		if(left<right){
    			left+=v[i];
    			i++;
    		}else{
    			right+=v[j];
    			j--;
    		}
    	}
    	if(i==j){
			if(left<right){
    			left+=v[i];
    			i++;
    		}else{
    			right+=v[j];
    			j--;
    		}
    	}
// cout<<left<<" : left right : "<<right<<"\n";
    	if(left==right){
    		ans=min(ans,i);
    	}

    	if(ans!=INT_MIN)
    		cout<<ans<<" ";
    	else cout<<n<<" ";

    // }
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}