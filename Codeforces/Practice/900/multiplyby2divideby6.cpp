#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;cin>>a>>b;
    bool pos=true;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(i%2!=0){
				if(pos==true){
					for(int k=0;k<b-1;k++){
						cout<<".";
					}
					cout<<"#";
					pos=false;
				}else{
					cout<<"#";
					for(int k=0;k<b-1;k++){
						cout<<".";
					}
					pos=true;
				}
				break;
			}
			cout<<"#"; 
		}
		cout<<"\n";
	}
	return 0;
}