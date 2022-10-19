#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a,b;cin>>a>>b;

	if(a==b){
		cout<<"=\n";
		return;
	}
    
    int l1=a.size(),l2=b.size();
	if(a[l1-1]!=b[l2-1]){
		if(a[l1-1]=='L'){
			cout<<">\n";
			return;
		}

		if(a[l1-1]=='M'){
			if(b[l2-1]=='L'){
				cout<<"<\n";
				return;
			}else if(b[l2-1]=='S'){
				cout<<">\n";
				return;
			}
		}

		if(a[l1-1]=='S'){
			cout<<"<\n";
			return;
		}

		if(b[l2-1]=='L'){
			cout<<"<\n";
			return;
		}

		if(b[l2-1]=='M'){
			if(a[l1-1]=='L'){
				cout<<">\n";
				return;
			}else if(a[l1-1]=='S'){
				cout<<"<\n";
				return;
			}
		}

		if(b[l2-1]=='S'){
			cout<<">\n";
			return;
		}
	}else{
		int ax=0,bx=0;
		for(int i=0;i<l1;i++){
			if(a[i]=='X')ax++;
		}
		for(int i=0;i<l2;i++){
			if(b[i]=='X')bx++;
		}

		if(a[l1-1]=='S'){
			if(ax>bx)cout<<"<\n";
			else cout<<">\n";
			return;
		}

		if(a[l1-1]=='L'){
			if(ax>bx)cout<<">\n";
			else cout<<"<\n";
			return;
		}

	}
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}