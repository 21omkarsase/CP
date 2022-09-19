// A. Parallelepiped
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You've got a rectangular parallelepiped with integer edge lengths. You know the areas of its three faces that have a common vertex. Your task is to find the sum of lengths of all 12 edges of this parallelepiped.

// Input
// The first and the single line contains three space-separated integers — the areas of the parallelepiped's faces. The area's values are positive ( > 0) and do not exceed 104. It is guaranteed that there exists at least one parallelepiped that satisfies the problem statement.

// Output
// Print a single number — the sum of all edges of the parallelepiped.

// Examples
// inputCopy
// 1 1 1
// outputCopy
// 12
// inputCopy
// 4 6 6
// outputCopy
// 28
// Note
// In the first sample the parallelepiped has sizes 1 × 1 × 1, in the second one — 2 × 2 × 3.

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int area1,area2,area3;cin>>area1>>area2>>area3;

	int l=sqrt((area1*area2)/area3);
    
    int b=area1/l;
    int d=area2/l;

    ll edgesCnt=0;
    edgesCnt+=((l*4)+(b*4)+(d*4));

    cout<<edgesCnt<<"\n";

	return 0;
}