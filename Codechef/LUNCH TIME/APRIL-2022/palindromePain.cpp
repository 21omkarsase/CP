// You are given two integers X and Y. You need to construct two different strings S1 and S2 consisting of only the characters ‘a′ and ‘b′, such that the following conditions are satisfied:

// Both S1 and S2 are palindromes.
// Both S1 and S2 should contain exactly X occurrences of a and Y occurrences of b.
// If there are multiple possible answers, you may print any of them. If it is not possible to construct two distinct strings satisfying the conditions, print −1 instead.

// Input Format
// The first line of input will contain a single integer T, denoting the number of test cases. Then the test cases follow.
// Each test case consists of a single line of input containing two space-separated integers X,Y.
// Output Format
// For each test case:

// If it is not possible to construct two distinct strings satisfying the conditions, print −1
// Otherwise, print two lines — the first should contain the string S1 and the second should contain S2
// If there are multiple possible answers, you may print any of them.
// Constraints
// 1≤T≤1000
// 1≤X,Y≤103
// Sample Input 1
// 2
// 2 4
// 3 3
// Sample Output 1
// abbbba
// babbab
// -1
// Explanation
// Test case 1: The three palindromes containing 2 a-s and 4 b-s are abbbba,babbab, and bbaabb. Printing any two of these is a valid answer.

// Test case 2: There are no palindromes containing 3 each of a and b.

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((x & 1) && (y & 1))
            cout << -1;
        else if ((x % 2) == 0 && (y % 2) == 0)
        {
            for (int i = 0; i < x / 2; i++)
                cout << 'a';
            for (int i = 0; i < y; i++)
                cout << 'b';
            for (int i = x / 2; i < x; i++)
                cout << 'a';

            cout << endl;

            for (int i = 0; i < y / 2; i++)
                cout << 'b';
            for (int i = 0; i < x; i++)
                cout << 'a';
            for (int i = 0; i < y / 2; i++)
                cout << 'b';
        }
        else if (x == 1 || y == 1)
            cout << -1;
        else if ((y & 1))
        {
            for (int i = 0; i < x / 2; i++)
                cout << 'a';
            for (int i = 0; i < y; i++)
                cout << 'b';
            for (int i = 0; i < x / 2; i++)
                cout << 'a';

            cout << endl;

            for (int i = 0; i < y / 2; i++)
                cout << 'b';
            for (int i = 0; i < x / 2; i++)
                cout << 'a';
            cout << 'b';
            for (int i = 0; i < x / 2; i++)
                cout << 'a';
            for (int i = 0; i < y / 2; i++)
                cout << 'b';
        }
        else
        {
            for (int i = 0; i < y / 2; i++)
                cout << 'b';
            for (int i = 0; i < x; i++)
                cout << 'a';
            for (int i = 0; i < y / 2; i++)
                cout << 'b';

            cout << endl;

            for (int i = 0; i < x / 2; i++)
                cout << 'a';
            for (int i = 0; i < y / 2; i++)
                cout << 'b';
            cout << 'a';
            for (int i = 0; i < y / 2; i++)
                cout << 'b';
            for (int i = 0; i < x / 2; i++)
                cout << 'a';
        }

        cout << endl;
    }
    return 0;
}