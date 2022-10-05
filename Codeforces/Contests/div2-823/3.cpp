#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;cin>>s;
    int n=s.size();
    if(n==1){
    	cout<<s<<"\n";
    	return;
    }
    string final="";
    string temp="";
    char key='z';
	for(int i=n-1;i>=1;i--){
		if(s[i]<s[i-1]){
			key=s[i];
			final+=key;
			i;
			while(i>=0 and key<=s[i-1]){
				if(s[i-1]==key)
					final+=s[i-1];
				else{
					temp+=s[i-1];
				}
				i--;
			}
		}else{
			final+=s[i];
		}
	}
	if(s[0]<s[1]){	
		final+=s[0];
	}
	string ans="";
	for(int i=0;i<temp.length();i++){
		char ch='9';
		if(temp[i]+1>ch){
			ans+='9';
		}else ans+=(temp[i]+1);
	}
	ans+=final;
	sort(ans.begin(),ans.end());
	cout<<ans<<"\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}