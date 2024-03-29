// B. Mainak and Interesting Sequence
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Mainak has two positive integers n and m.

// Mainak finds a sequence a1,a2,…,an of n positive integers interesting, if for all integers i (1≤i≤n), the bitwise XOR of all elements in a which are strictly less than ai is 0. Formally if pi is the bitwise XOR of all elements in a which are strictly less than ai, then a is an interesting sequence if p1=p2=…=pn=0.

// For example, sequences [1,3,2,3,1,2,3], [4,4,4,4], [25] are interesting, whereas [1,2,3,4] (p2=1≠0), [4,1,1,2,4] (p1=1⊕1⊕2=2≠0), [29,30,30] (p2=29≠0) aren't interesting.

// Here a⊕b denotes bitwise XOR of integers a and b.

// Find any interesting sequence a1,a2,…,an (or report that there exists no such sequence) such that the sum of the elements in the sequence a is equal to m, i.e. a1+a2…+an=m.

// As a reminder, the bitwise XOR of an empty sequence is considered to be 0.

// Input
// Each test contains multiple test cases. The first line contains a single integer t (1≤t≤105) — the number of test cases. Description of the test cases follows.

// The first line and the only line of each test case contains two integers n and m (1≤n≤105, 1≤m≤109) — the length of the sequence and the sum of the elements.

// It is guaranteed that the sum of n over all test cases does not exceed 105.

// Output
// For each test case, if there exists some interesting sequence, output "Yes" on the first line, otherwise output "No". You may print each letter in any case (for example, "YES", "Yes", "yes", "yEs" will all be recognized as positive answer).

// If the answer is "Yes", output n positive integers a1,a2,…,an (ai≥1), forming an interesting sequence such that a1+a2…+an=m. If there are multiple solutions, output any.

// Example
// inputCopy
// 4
// 1 3
// 6 12
// 2 1
// 3 6
// outputCopy
// Yes
// 3
// Yes
// 1 3 2 2 3 1
// No
// Yes
// 2 2 2
// Note
// In the first test case, [3] is the only interesting sequence of length 1 having sum 3.
// In the third test case, there is no sequence of length 2 having sum of elements equal to 1, so there is no such interesting sequence.
// In the fourth test case, p1=p2=p3=0, because bitwise XOR of an empty sequence is 0.

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;cin>>n>>m;
    
    if(((n % 2 == 0) && (m % 2 == 1)) || (m < n)){ 
		cout << "NO"<<endl;
	}
	else if(!(n&1)){
		cout<<"YES"<<endl;
		for(int i=1;i<=n-2;i++)
			cout<<1<<" ";
		cout<<((m-n+2)/2)<<" "<<((m-n+2)/2)<<endl;
	}
	else{
		cout<<"YES"<<endl;
		for(int i=1;i<=n-1;i++){
			cout<<1<<" ";
		}
		cout<<(m-n+1)<<endl;
	}
	
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}