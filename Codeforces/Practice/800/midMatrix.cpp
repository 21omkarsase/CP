// A. Beautiful Matrix
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

// Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
// Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
// You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

// Input
// The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

// Output
// Print a single integer — the minimum number of moves needed to make the matrix beautiful.

// Examples
// inputCopy
// 0 0 0 0 0
// 0 0 0 0 1
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// outputCopy
// 3
// inputCopy
// 0 0 0 0 0
// 0 0 0 0 0
// 0 1 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// outputCopy
// 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 0, c = 0;

    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
        {
            int a;
            cin >> a;
            if (a)
            {
                r = i, c = j;
                break;
            }
        }
    int ans = 0;
    if (r <= 3 and c <= 3)
    {
        ans = (3 - r) + (3 - c);
    }
    if (r <= 3 and c >= 3)
    {
        ans = (3 - r) + (c - 3);
    }
    if (r >= 3 and c <= 3)
    {
        ans = (r - 3) + (3 - c);
    }
    if (r >= 3 and c >= 3)
    {
        ans = (r - 3) + (c - 3);
    }

    cout << ans << endl;

    return 0;
}