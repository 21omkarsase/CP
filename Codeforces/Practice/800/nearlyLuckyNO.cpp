// A. Nearly Lucky Number
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

// Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

// Input
// The only line contains an integer n (1 ≤ n ≤ 1018).

// Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

// Output
// Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

// Examples
// inputCopy
// 40047
// outputCopy
// NO
// inputCopy
// 7747774
// outputCopy
// YES
// inputCopy
// 1000000000000000000
// outputCopy
// NO
// Note
// In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

// In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

// In the third sample there are no lucky digits, so the answer is "NO".

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;cin>>n;

	// string s=to_string(n);  //we should take complexity std::to_string as O(1) and overall complexity of such cycle is m*O(1) -> O(m) where m is the cycle iterations count.15-Jul-2021

	// int ld=0;
	// for(int i=0;i<s.length();i++){
	// 	if(s[i]=='4' or s[i]=='7')ld++;
	// }

	// string x=to_string(ld);

	// bool flag=false;
	// for(int i=0;i<x.size();i++){
	// 	if(x[i]!='4' and x[i]!='7')flag=true;
	// }

	// if(flag)cout<<"NO"<<endl;
	// else cout<<"YES"<<endl;

	int ld=0;
	while(n){
		int dg=n%10;
		if(dg==4 or dg==7)ld++;
		n/=10;
	}
    
    bool flag=true;
    if(ld==0)flag=false;
	while(ld){
		int dg=ld%10;
		if(dg==4 or dg==7){
			ld/=10;
			continue;
		}else {
			flag=false;
			break;
		}
		ld/=10;
	}cout<<endl;

	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}