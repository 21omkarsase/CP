// #include<bits/stdc++.h>
// using namespace std;

// string decimalToBinary(int n){
// 	string ans="";
// 	while(n){
// 		int ld=n%2;
// 		ans+=(ld+48);
// 		n/=2;
// 	}
// 	for(int i=0;i<(ans.size()/2);i++){
// 		swap(ans[i],ans[ans.size()-i-1]);
// 	}
// 	return ans;
// }

// int binaryToDecimal(int n){
// 	int ans=0; 
// 	int i=0;
// 	while(n){
// 		int ld=n%10;
// 		ans+=(pow(2,i)*ld);
// 		i++;
// 		n/=10;
// 	}
// 	return ans;
// }

// int main(){
// 	int a,b;cin>>a>>b;

// 	int ad=binaryToDecimal(a);
// 	int bd=binaryToDecimal(b);
	
// 	string final=decimalToBinary(ad^bd);
// 	int len=to_string(a).size()-final.size();
// 	cout<<len<<" len "<<to_string(a)<<" "<<to_string(a).size()<<" a "<<final.size()<<"f "<<endl;
// 	for(int i=1;i<=len;i++){
// 		final='0'+final;
// 	}


// 	cout<<final<<endl;

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;cin>>a>>b;
	string final="";
	for(int i=0;i<a.length();i++){
		if(a[i]!=b[i])final+='1';
		else final+='0';
	}

	cout<<final<<endl;
	
	return 0;
}