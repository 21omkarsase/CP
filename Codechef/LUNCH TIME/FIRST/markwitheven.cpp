#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int sum=0;
	    for(int i=0; i<n; i++){
	        sum+=arr[i];
	    }
	    
	     if(sum%2==0){
	        cout<<"0"<<endl;
	    }
	    
	     else{
	        int ans=0;
	        for(int i=0; i<n; i++){
	        if((arr[i]%2==0) && ((arr[i]+1)/2-1 <= 0)){
	            ans=1;
	            break;
	        }
	        }
	        if(ans==0){
	            cout<<-1<<endl;
	        }
	        else{
	            cout<<1<<endl;
	        }
	    }
	}
	return 0;
}
