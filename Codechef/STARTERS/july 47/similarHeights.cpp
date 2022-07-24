// Problem
// Chef is teaching his class of NN students at Hogwarts. He groups students with the same height together for an activity. Some of the students end up in a groups with only themselves and are saddened by this.

// With the help of his magic wand, Chef can increase the height of any student to any value he likes. Now Chef wonders, what is the minimum number of students whose height needs to be increased so that there are no sad students?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains one integer NN — the number of students.
// The second line consists of NN space-separated integers H_1, H_2, \ldots, H_NH
// 1
// ​
//  ,H
// 2
// ​
//  ,…,H
// N
// ​
//   denoting the heights of the students.
// Output Format
// For each test case, output on a single line the minimum number of students whose heights must to be increased.

// Constraints
// 1 \leq T \leq 5\cdot 10^41≤T≤5⋅10
// 4

// 2 \leq N \leq 10^52≤N≤10
// 5

// 1 \leq H_i \leq 10^91≤H
// i
// ​
//  ≤10
// 9

// The sum of NN over all test cases won't exceed 3\cdot 10^53⋅10
// 5
//  .
// Sample 1:
// Input
// Output
// 4
// 4
// 1 2 1 2
// 4
// 1 2 2 2
// 3
// 1 1 1
// 5
// 1 2 3 4 5
// 0
// 1
// 0
// 3
// Explanation:
// Test case 11: The students form 22 groups each having 22 students so no change of heights is required.

// Test case 22: Initially the student with height 11 cannot be paired with anyone else. Chef can increase his height to 22 and now there is only 11 group with all the 44 students in it.

// Test case 33: All students have same height and hence no change of heights is required.

// Test case 44: One possible way is to increase the height of the first student to 55 and the heights of the second and third students to 44, hence forming one group of 22 students and one of 33 students. In total, the heights of 33 students need to be changed.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        unordered_map<int, int> m;
        int longest = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            longest = max(longest, a);
            m[a]++;
        }
        int uniqueNo = 0, longestUnique = INT_MIN, maxFreq = INT_MIN;
        bool allPaired = true;
        for (auto i : m)
        {
            if (i.second < 2)
            {
                allPaired = false;
            }
            if (i.second == 1)
            {
                uniqueNo++;
                longestUnique = i.first;
            }
            maxFreq = max(maxFreq, i.second);
        }
        if (!allPaired)
        {
            if (uniqueNo == 1 and longestUnique == longest)
            {
                if (maxFreq > 2)
                {
                    cout << (uniqueNo / 2) + 1 << endl;
                }
                else
                {
                    cout << (uniqueNo / 2) + 2 << endl;
                }
            }
            else if (uniqueNo % 2 == 0)
            {
                cout << uniqueNo / 2 << endl;
            }
            else
            {
                cout << (uniqueNo / 2) + 1 << endl;
                // cout<<uniqueNo<<" "<<longest<<" "<<maxFreq<<endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
