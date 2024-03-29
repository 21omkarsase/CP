// Your class recently got a maths assignment with 55 questions. There are N (\le 20)N(≤20) students in the class and at most 22 people can collaborate. For each student, you know which problems they solved.

// Find out if there exists a team of two students who can together solve all problems.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases. TT test cases follow.

// Each of the following test cases contains N + 1N+1 lines, where NN is the number of students in the class.
// The first line contains a single integer NN.
// Each of the following NN lines contains K_i + 1K 
// i
// ​
//  +1 positive integers separated by whitespaces.
// In the i^{th}i 
// th
//   line, the first positive integer K_iK 
// i
// ​
//   is the number of problems the i^{th}i 
// th
//   student can solve. The next K_iK 
// i
// ​
//   integers are x_1, x_2, \ldots, x_{K_i}x 
// 1
// ​
//  ,x 
// 2
// ​
//  ,…,x 
// K 
// i
// ​
 
// ​
//  , the indices of the problems this student can solve.
// Output Format
// The output must consist of TT lines.

// Each line must contain a single string: The solution to the i^{th}i 
// th
//   test case as a YES or NO (where YES should be returned if some pairing of students is capable of solving all the problems, and NO otherwise).
// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

// Constraints
// 1 \leq T \leq 10001≤T≤1000
// 2 \leq N \leq 202≤N≤20
// 0 \leq K_i \leq 50≤K 
// i
// ​
//  ≤5
// 1 \leq x_i \leq 51≤x 
// i
// ​
//  ≤5
// Sample 1:
// Input
// Output
// 4
// 3
// 1 3
// 1 1
// 4 1 3 4 5
// 2
// 4 2 3 4 5
// 3 1 2 4
// 3
// 1 1
// 1 2
// 1 3
// 2
// 2 1 5
// 3 2 3 4
// NO
// YES
// NO
// YES
// Explanation:
// Test case 1:1: There is no student who solved the second question.

// Test case 2:2: The second student can solve the first question and the first student can solve all the remaining problems, so they can form a team to solve all the problems together.

// Test case 3:3: There is no student who solved fourth and fifth questions.

// Test case 4:4: Given 22 people can collaborate to solve all the problems.


#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
    vector<vector<int>>a;

	for(int i=0;i<n;i++){
		int s;cin>>s;
		vector<int>v;
		for(int j=0;j<s;j++){
			int x;cin>>x;
			v.push_back(x);
		}
		a.push_back(v);
	}


	for(int i=0;i<n;i++){
		set<int>s;
		for(int j=0;j<a[i].size();j++){
			s.insert(a[i][j]);
		}

		for(int x=0;x<n;x++){
			set<int> s1(s.begin(), s.end());
			if(i==x){
				continue;
			}

			for(int y=0;y<a[x].size();y++){
				s1.insert(a[x][y]);
			}
			
			if(s1.size()==5){
				cout<<"YES"<<endl;
				return;
			}
		}
	}

    cout<<"NO"<<endl;

}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}