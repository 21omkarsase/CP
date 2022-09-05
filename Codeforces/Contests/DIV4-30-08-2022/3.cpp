#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<string>a;
	vector<string>b;
	vector<string>c;

	unordered_map<string,int>m1;
	unordered_map<string,int>m2;
	unordered_map<string,int>m3;

	for(int i=0;i<n;i++){
		string s;cin>>s;
		a.push_back(s);
		m1[a[i]]++;
	}
	for(int i=0;i<n;i++){
		string s;cin>>s;
		b.push_back(s);
		m2[b[i]]++;
	}
	for(int i=0;i<n;i++){
		string s;cin>>s;
		c.push_back(s);
		m3[c[i]]++;
	}

	int ans1=0,ans2=0,ans3=0;

	for(int i=0;i<n;i++){
		if(m2.find(a[i])!=m2.end() and m3.find(a[i])!=m3.end()){
			continue;
		}else if(m2.find(a[i])!=m2.end() or m3.find(a[i])!=m3.end()){
			ans1+=1;
		}else ans1+=3;
	}

	for(int i=0;i<n;i++){
		if(m1.find(b[i])!=m1.end() and m3.find(b[i])!=m3.end()){
			continue;
		}else if(m1.find(b[i])!=m1.end() or m3.find(b[i])!=m3.end()){
			ans2+=1;
		}else ans2+=3;
	}

	for(int i=0;i<n;i++){
		if(m2.find(c[i])!=m2.end() and m1.find(c[i])!=m1.end()){
			continue;
		}else if(m2.find(c[i])!=m2.end() or m1.find(c[i])!=m1.end()){
			ans3+=1;
		}else ans3+=3;
	}

	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
}
int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}