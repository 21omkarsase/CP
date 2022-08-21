// A. Stones on the Table
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.

// Input
// The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

// The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.

// Output
// Print a single integer — the answer to the problem.

// Examples
// inputCopy
// 3
// RRG
// outputCopy
// 1
// inputCopy
// 5
// RRRRR
// outputCopy
// 4
// inputCopy
// 4
// BRBG
// outputCopy
// 0

#include <bits/stdc++.h>
using namespace std;

// void printv(int a,int b,int c,char ch){
// 	cout<<a<<" "<<b<<" "<<c<<" "<<ch<<endl;
// }

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	int i = 0, r = 0, b = 0, g = 0, ans = 0;
	while (i < n)
	{
		// printv(r,g,b,'r');
		if (s[i] == 'R')
		{
			// cout<<s[i]<<endl;
			r++;
			// printv(r,g,b,'r');
			// cout<<r<<" "<<g<<" "<<b<<endl;
			if (g > 1)
			{
				ans += g - 1;
			}
			else if (b > 1)
			{
				ans += b - 1;
			}
			g = 0, b = 0;
		}
		else if (s[i] == 'G')
		{
			g++;
			// printv(r,g,b,'g');
			if (r > 1)
			{
				ans += r - 1;
			}
			else if (b > 1)
			{
				ans += b - 1;
			}
			r = 0, b = 0;
		}
		else
		{
			b++;
			// printv(r,g,b,'b');
			if (r > 1)
			{
				ans += r - 1;
			}
			else if (g > 1)
			{
				ans += g - 1;
			}
			g = 0, r = 0;
		}
		i++;
	}

	if (r > 0)
		ans += r - 1;
	else if (b > 0)
		ans += b - 1;
	else
		ans += g - 1;

	cout << ans << endl;

	return 0;
}