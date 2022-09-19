#include<bits/stdc++.h>
using namespace std;

//these functions are known as comparator functions

bool vswap(int a,int b){
	// // if(a>b)return true;  
	// if(a<b)return true;     
	// return false;

	// or

	return a<b;
}

bool vpsort(pair<int,int>a,pair<int,int>b){
	if(a.first!=b.first){
		// if(a.first<b.second)return true;
		// else return false;
		//or
		return a.first<b.first;
	}
	else {
		// if(a.first>b.second)return true;
		// else return false;  
		// or
		return a.second>b.second;
	}
	// if(a>b)return true;
	// return false;
}

int main(){
	int n;cin>>n;
	vector<int>a(n);
	for(auto &i:a)cin>>i;
    
    // for(int i=0;i<n;i++){
    // 	for(int j=0;j<n;j++){
    // 		if(vswap(a[i],a[j]))
    // 			swap(a[i],a[j]);
    // 	}
    // }

	//using in built sort function
	sort(a.begin(),a.end(),vswap);

    for(auto i:a)cout<<i<<" ";

	cout<<"\n\n";

    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    	cin>>v[i].first>>v[i].second;

    // for(int i=0;i<n;i++){
    // 	for(int j=0;j<n;j++){
    // 		if(vpsort(v[i],v[j]))
    // 			swap(v[i],v[j]);
    // 	}
    // }

    //using built in function
    sort(v.begin(),v.end(),vpsort);

    // sort(v.begin(),v.end(),greater<pair<int,int>>());

    for(auto i:v)cout<<i.first<<" "<<i.second<<" , ";
   
	return 0;
}