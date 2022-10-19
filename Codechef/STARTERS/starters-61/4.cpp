#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	string a,b;cin>>a>>b;
    string final="";
    int fl=final.size(); 
    string temp="";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]!=b[j]){
				if(!temp.empty()){
					if(temp.size()>final.size()){
						final=temp;
						temp="";
					}
				}
				continue;
			}

			if(a[i]==b[i]){
				temp+=a[i];
				continue;
			}
		}
	}

	if(!temp.empty()){
		if(temp.size()>final.size()){
			final=temp;
			temp="";
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}