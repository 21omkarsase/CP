// Problem
// While playing chess, Chef noticed that it is generally advantageous for him if his knight attacks two or more of his opponent's pieces simultaneously. To practice this skill, Chef decided to perform the following exercise:

// Take an empty 8 \times 88×8 chessboard, and any two white pieces.
// Choose two distinct cells (X_1, Y_1)(X
// 1
// ​
//  ,Y
// 1
// ​
//  ), (X_2, Y_2)(X
// 2
// ​
//  ,Y
// 2
// ​
//  ) and place the pieces on those cells (the cell at the intersection of the ii-th row and jj-th column is denoted (i, j)(i,j)).
// Check if there exists an empty cell where he can place a black knight in such a way that the knight attacks both the white pieces simultaneously.
// Given the position of the two white pieces (X_1, Y_1)(X
// 1
// ​
//  ,Y
// 1
// ​
//  ), (X_2, Y_2)(X
// 2
// ​
//  ,Y
// 2
// ​
//  ), print 'YES' if there exists an empty cell where he can place a black knight in such a way that the knight attacks both the white pieces simultaneously, otherwise print NO.

// For reference, a knight attacks a piece placed in a cell that is:

// One square horizontally and two squares vertically away from it, or
// One square vertically and two squares horizontally away from it
// A visual description of this may be found here.

// Input Format
// The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
// The first line of each test case contains two space-separated integers X_1X
// 1
// ​
//   and Y_1Y
// 1
// ​
//  , the position of first white piece.
// The second line of each test case contains two space-separated integers X_2X
// 2
// ​
//   and Y_2Y
// 2
// ​
//  , the position of second white piece.
// Output Format
// For each test case, output the answer on a new line — YES if there exists an empty cell where Chef can place a black knight in such a way that the knight attacks both the white pieces simultaneously, and NO otherwise.

// You may print each character of YES and NO in either uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

// Constraints
// 1 \leq T \leq 50001≤T≤5000
// 1 \leq X_1, Y_1 \leq 81≤X
// 1
// ​
//  ,Y
// 1
// ​
//  ≤8
// 1 \leq X_2, Y_2 \leq 81≤X
// 2
// ​
//  ,Y
// 2
// ​
//  ≤8
// Both the cells are distinct
// Sample 1:
// Input
// Output
// 4
// 1 1
// 1 2
// 1 1
// 1 3
// 1 1
// 1 4
// 1 1
// 1 5
// NO
// YES
// NO
// YES
// Explanation:
// Test case 22: Chef can place a knight at (3, 2)(3,2), forking both pieces.

// Test case 44: Chef can place a knight at (2, 3)(2,3), forking both pieces.

// In the other two cases it can be verified that there is no way to place a knight that attacks both pieces at the same time.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int xA[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int yA[8] = {1, -1, 1, -1, 2, -2, 2, -2};

    vector<vector<int>> v1, v2;

    for (int i = 0; i < 8; i++)
    {
        int x = x1 + xA[i];
        int y = y1 + yA[i];

        if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
        {
            v1.push_back({x, y});
        }

        x = x2 + xA[i];
        y = y2 + yA[i];

        if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
        {
            v2.push_back({x, y});
        }
    }

    bool flag = false;
    for (auto i1 : v1)
    {
        for (auto i2 : v2)
        {
            if (i1 == i2)
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    // while (t--)
    // {
    solve();
    // }

    // vector<int> v1 = {1, 2, 5, 63};
    // for (auto it : v1)
    // {
    //     cout << it << endl;
    // }
}