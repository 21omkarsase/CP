#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n; 
	string s;cin>>s; 
	int nc=0,oc=0; 
	for(int i=0;i<s.size();i++){
		if(s[i]>='0' and s[i]<='9'){
			nc++;
		}else oc++;
	}
	sort(s.begin(),s.end(),greater<char>());
	string nums="",chars="";
	for(int i=0;i<n;i++){
		if(s[i]!='+' and s[i]!='-'){
			nums+=s[i];
		}else{
			chars+=s[i];
		}
	}
	reverse(chars.begin(),chars.end());

	// cout<<s<<"\n";
	
	// cout<<nc<<" : "<<oc<<"\n";
	// cout<<nums<<" : "<<chars<<"\n";
	int i;
	for(i=0;i<(nums.size()-chars.size());i++){
		cout<<nums[i];
	}
	int j=0;
	cout<<chars[j++];

	for(;i<nums.size();i++){
		cout<<nums[i];
		if(j<=chars.size()-1)
			cout<<chars[j++];
	}
	cout<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}