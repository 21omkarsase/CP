// B. Interesting Sum
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given an array a that contains n integers. You can choose any proper subsegment al,al+1,…,ar of this array, meaning you can choose any two integers 1≤l≤r≤n, where r−l+1<n. We define the beauty of a given subsegment as the value of the following expression:

// max(a1,a2,…,al−1,ar+1,ar+2,…,an)−min(a1,a2,…,al−1,ar+1,ar+2,…,an)+max(al,…,ar)−min(al,…,ar).
// Please find the maximum beauty among all proper subsegments.

// Input
// The first line contains one integer t (1≤t≤1000) — the number of test cases. Then follow the descriptions of each test case.

// The first line of each test case contains a single integer n (4≤n≤105) — the length of the array.

// The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the elements of the given array.

// It is guaranteed that the sum of n over all test cases does not exceed 105.

// Output
// For each testcase print a single integer — the maximum beauty of a proper subsegment.

// Example
// inputCopy
// 4
// 8
// 1 2 2 3 1 5 6 1
// 5
// 1 2 3 100 200
// 4
// 3 3 3 3
// 6
// 7 8 3 1 1 8
// outputCopy
// 9
// 297
// 0
// 14
// Note
// In the first test case, the optimal segment is l=7, r=8. The beauty of this segment equals to (6−1)+(5−1)=9.

// In the second test case, the optimal segment is l=2, r=4. The beauty of this segment equals (100−2)+(200−1)=297.

#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;

void solve()
{
	int n;
	cin >> n;

	vi a(n);
	for (auto &c : a)
		cin >> c;

	sort(a.begin(), a.end());

	cout << a[n - 1] + a[n - 2] - a[0] - a[1] << "\n";
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}