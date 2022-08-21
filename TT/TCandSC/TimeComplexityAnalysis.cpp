#include <bits/stdc++.h>
using namespace std;

// 10^7 operations  can be performed in --> 1s 
// 10^8 operations  can be performed in --> 10s
// 10^9 operations  can be performed in --> 100s 
// 10^10 operations can be performed in --> 1000s


// O(N))
void bigOn(int n){
	for(int i=0;i<n;i++){
		cout<<"o(n)"<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"o(n)"<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"o(n)"<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"o(n)"<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<"o(n)"<<endl;
	}
	
	//T.C O(n)+O(n)+O(n)+O(n)+O(n)  = 5(O(n))  ~= O(n)
	
	//if 1s --> 10^7 operations
	          // for n<=10^7 it will work
	
	
}

void bigOn2(int n){
	for(int i=0;i<n;i++){
		for(int i=0;i<n;i++){
			cout<<"o(n)"<<endl;
		}
	}
	
	//T.C O(n2)
	
	//if 1s --> 10^7-10^8 operations
	          // it will work only for n<=10^3 - 10^4
}

void bigOlogn(int n){
	while(n){
		n/=2;
	}
	
	//for(n)  --> n/2
	//for(n-1) --> n/2/2-->n/2^2
	//for(n-1) -->n/2^3
	// ....
	//for(n-1) --> n/2^k
	
	// k=log2(n)
	
	
	//T.C O(Log n)
	
	//for n=8 log(8)~=3 approx
	//for n=10 log(10)~=3 approx
	
	//for n=10^5 log(10^5)~= 5*(log(10))==5*3 ~=15 approx
	
	
	// o(log n) is far better than o(n)
}

void sameAsBigOn2(int n){
	for(int i=0;i<n;i++){      //0 to n
		for(int i=0;i<i;i++){  // 0 to i
			cout<<"omkar"<<endl;
		}
	}
	
	//T.C
	  //FOR N th iteration--> T.C=N
	  //FOR N-1 th iteration--> T.C=N-1
	  // ...
	  // for 1 st iteration --> T.C= 1 
	  // for 0 th iteration --> T.C= 0 
	
	// Total T.C              -->(N(N+1)/2)  ==n^2/2 +n/2 ~= n^2
	
	// FOR  n=10^7  --> 10^7^2/2  ~=2*10^13 which is approx n^2
	
	//it doesn't look like o(n^2) but it is 
}

int main(){
	int n;cin>>n;
	
	//(1)
	bigOn(n);
	
	//(2)
	bigOn2(n);
	
	//(3)
	bigOlogn(n);
	
	//(4)
	sameAsBigOn2(n);  //same with small change 
	
	
	return 0;
}