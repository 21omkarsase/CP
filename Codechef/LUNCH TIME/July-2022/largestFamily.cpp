// Problem
// A certain parallel universe has exactly NN people living in it.

// The ii-th of these NN people claims that they are the parent of exactly A_iA
// i
// ​
//   of these NN people.

// However, some of these people might be lying — the ii-th person may be either telling the truth (in which case they have exactly A_iA
// i
// ​
//   children) or lying (in which case they can have any number of children).

// It is known that each person has at most one parent. Further, as one would expect, it is not allowed for a person's child to also be their ancestor.

// What is the maximum possible number of truth-tellers in this universe?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN, the number of people.
// The second line of each test case contains NN space-separated integers A_1, A_2, \ldots, A_NA
// 1
// ​
//  ,A
// 2
// ​
//  ,…,A
// N
// ​
//  .
// Output Format
// For each test case, output on a new line the maximum number of people that can be telling the truth.

// Constraints
// 1 \leq T \leq 4 \cdot 10^41≤T≤4⋅10
// 4

// 1 \leq N \leq 3\cdot 10^51≤N≤3⋅10
// 5

// 0 \leq A_i \lt N0≤A
// i
// ​
//  <N
// The sum of NN across all test cases won't exceed 3 \cdot 10^53⋅10
// 5
//  .
// Subtasks
// Subtask 1 (20 points):
// 1 \leq T \leq 51≤T≤5
// 1 \leq N \leq 201≤N≤20
// Subtask 2 (80 points):
// No further constraints.
// Sample 1:
// Input
// Output
// 4
// 2
// 1 0
// 2
// 1 1
// 3
// 2 0 1
// 5
// 2 3 1 2 3
// 2
// 1
// 2
// 2
// Explanation:
// Test case 11: Both people can be telling the truth, with the first person being the parent of the second.

// Test case 22: If both people were telling the truth, they would be each others' parents — and that is not allowed. Hence, at most one of them can be telling the truth.

// Test case 33: The first and third people cannot be telling the truth at the same time. However, it is possible for the first and second people to be truthful — person 11 can be the parent of person 22 and person 33. Hence, the answer is 22.

// Test case 44: There are several ways to pick 22 people to be telling the truth — for example,

// The parent of person 22 and person 33 is person 11
// The parent of person 11 and person 55 is person 44
// in which case persons number 11 and 44 would be telling the truth.

// However, it can be shown that it is impossible for any three of them to be simultaneously telling the truth.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    int childCount = 0, ans = 0;
    for (int i = 0; i < n && childCount + a[i] < n; i++)
    {
        ans++;
        childCount += a[i];
    }
    cout << ans << endl;
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
