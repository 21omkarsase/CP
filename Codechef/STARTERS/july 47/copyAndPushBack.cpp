
// Problem
// Anton loves creating strings!

// Anton now wants to create a string SS following some specific rules. They are as follows:

// Initially, SS is empty. Then, Anton can perform two types of operations on SS:

// Choose a lowercase Latin character (an element of \{a, b, c, \ldots, z\}{a,b,c,…,z}) and append it to SS. For example, if currently S = \texttt{clap}S=clap, Anton can turn it into one of \{\texttt{clapa}, \texttt{clapb}, \ldots, \texttt{clapz}\}{clapa,clapb,…,clapz}.
// Append a copy of SS to itself. For example, if currently S = \texttt{clap}S=clap, Anton can turn it into \texttt{clapclap}clapclap.
// However, Anton doesn't want to perform operation 11 twice in a row.

// You are given a string AA consisting of the lowercase Latin alphabet. Is it possible for Anton to create AA using his operations any number of times?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of two lines of input.
// The first line of each test case contains a single integer NN, the length of the string AA.
// The second line of each test case contains a string AA of length NN.
// Output Format
// For each test case, output on a new line the answer — YES if Anton can create AA using his operations, and NO otherwise.

// Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yes, and YeS will all be treated as identical.

// Constraints
// 1 \leq T \leq 10^51≤T≤10
// 5

// 1 \leq N \leq 10^61≤N≤10
// 6

// AA consists of only lowercase Latin characters
// The sum of NN across all test cases won't exceed 10^610
// 6

// Sample 1:
// Input
// Output
// 4
// 2
// ab
// 3
// oof
// 6
// aabaab
// 5
// eevee
// NO
// YES
// YES
// NO
// Explanation:
// Test case 11: Anton can create \texttt{a}a by starting from the empty string and appending \texttt{a}a using operation 11. However, there is no way to create \texttt{ab}ab — the only way to do so is to use operation 11 again and append \texttt{b}b; but this is not allowed.

// Test case 22: Anton can create \texttt{oof}oof from the empty string as follows:

// Use operation 11 to append \texttt{o}o. The current string is \texttt{o}o.
// Use operation 22 to append the string to itself. The current string is \texttt{oo}oo.
// Use operation 11 to append \texttt{f}f. The string is now \texttt{oof}oof, as required.
// Test case 33: \texttt{aabaab}aabaab can be created as follows:

// Append \texttt{a}a to the empty string. The current string is \texttt{a}a.
// Use operation 22. The current string is \texttt{aa}aa.
// Append \texttt{b}b with operation 11. The current string is \texttt{aab}aab.
// Use operation 22. The current string is \texttt{aabaab}aabaab, and we are done.
// Test case 44: It can be shown that no sequence of operations will allow Anton to create the string \texttt{eevee}eevee.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool flag = true;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            n--;
        }
        else
        {
            int mid = n / 2 - 1;
            if (s.substr(0, mid + 1) == s.substr(mid + 1, n - mid - 1))
            {
                n /= 2;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
