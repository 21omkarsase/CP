// Problem
// Two friends Chef and Chefina are currently on floors AA and BB respectively. They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible.

// Chef can climb down XX floors per minute while Chefina can climb down YY floors per minute. Determine who will reach the ground floor first. In case both reach the ground floor together, print Both.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// The first line of each test case contains four space-separated integers AA, BB, XX, and YY — the current floor of Chef, the current floor of Chefina, speed of Chef and speed of Chefina in floors per minute respectively.
// Output Format
// For each test case, output on a new line:

// Chef if Chef reaches the ground floor first.
// Chefina if she reaches the ground floor first.
// Both if both reach the ground floor at the same time.
// You may print each character of the string in uppercase or lowercase. For example, the strings CHEF, chef, Chef, and chEF are all considered the same.

// Constraints
// 1 \leq T \leq 25001≤T≤2500
// 1 \leq A, B \leq 1001≤A,B≤100
// 1 \leq X, Y \leq 101≤X,Y≤10
// Sample 1:
// Input
// Output
// 4
// 2 2 2 2
// 4 2 1 5
// 3 2 4 1
// 3 2 2 1
// Both
// Chefina
// Chef
// Chef
// Explanation:
// Test case 11: Chef is on the second floor and has a speed of 22 floors per minute. Thus, Chef takes 11 minute to reach the ground floor. Chefina is on the second floor and and has a speed of 22 floors per minute. Thus, Chefina takes 11 minute to reach the ground floor. Both Chef and Chefina reach the ground floor at the same time.

// Test case 22: Chef is on the fourth floor and has a speed of 11 floor per minute. Thus, Chef takes 44 minute to reach the ground floor. Chefina is on the second floor and and has a speed of 55 floors per minute. Thus, Chefina takes 0.40.4 minutes to reach the ground floor. Chefina reaches the ground floor first.

// Test case 33: Chef is on the third floor and has a speed of 44 floors per minute. Thus, Chef takes 0.750.75 minutes to reach the ground floor. Chefina is on the second floor and and has a speed of 11 floor per minute. Thus, Chefina takes 22 minutes to reach the ground floor. Chef reaches the ground floor first.

// Test case 44: Chef is on the third floor and has a speed of 22 floors per minute. Thus, Chef takes 1.51.5 minutes to reach the ground floor. Chefina is on the second floor and and has a speed of 11 floor per minute. Thus, Chefina takes 22 minutes to reach the ground floor. Chef reaches the ground floor first.

#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,x,y;cin>>a>>b>>x>>y;
	float ans1,ans2;
	ans1=(float)a/(float)x,ans2=(float)b/(float)y; 

	if(ans1<ans2)cout<<"Chef\n";
	else if(ans2<ans1)cout<<"Chefina\n";
	else cout<<"Both\n";
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}