// Problem
// Chef has two binary strings AA and BB, both having length NN. He can perform the following operation on AA any number of times (possibly zero):

// Select any index ii (1 \le i \le N - 1)(1≤i≤N−1) and simultaneously set A_i := A_i \oplus A_{i + 1}A
// i
// ​
//  :=A
// i
// ​
//  ⊕A
// i+1
// ​
//   and A_{i + 1} := A_i \oplus A_{i + 1}A
// i+1
// ​
//  :=A
// i
// ​
//  ⊕A
// i+1
// ​
//  . Formally, if initially A_i = xA
// i
// ​
//  =x and A_{i + 1} = yA
// i+1
// ​
//  =y then set A_i := x \oplus yA
// i
// ​
//  :=x⊕y and A_{i + 1} := x \oplus yA
// i+1
// ​
//  :=x⊕y
// Here, \oplus⊕ denotes the bitwise XOR operation.

// Chef wants to determine if it is possible to make AA equal to BB by applying the above operation any number of times. Can you help Chef?

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first line of each test case contains an integer NN — the length of the binary string AA.
// The second line of each test case contains the binary string AA of length NN.
// The third line of each test case contains the binary string BB of length NN.
// Output Format
// For each test case, output YES if Chef can make string AA equal to string BB by applying the above operation any number of times. Otherwise, output NO.

// You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

// Constraints
// 1 \le T \le 10^51≤T≤10
// 5

// 2 \le N \le 10^52≤N≤10
// 5

// The sum of NN over all test cases does not exceed 2 \cdot 10^52⋅10
// 5

// Sample 1:
// Input
// Output
// 3
// 2
// 00
// 10
// 3
// 010
// 000
// 4
// 0011
// 0100
// NO
// YES
// YES
// Explanation:
// Test case 11: It can be proven that we can not make AA equal to BB by using the given operation.

// Test case 22: We can apply the following operations: 0\underline{10} \rightarrow 0\underline{11} \rightarrow 0000
// 10
// ​
//  →0
// 11
// ​
//  →000.

// Test case 33: We can apply the following operations: 0\underline{01}1 \rightarrow 01\underline{11} \rightarrow 01000
// 01
// ​
//  1→01
// 11
// ​
//  →0100.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;

    string one_zero = "", zero_one = "";
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            one_zero += '1';
            zero_one += '0';
        }
        else
        {
            one_zero += '0';
            zero_one += '1';
        }
    }
    int one = count(a.begin(), a.end(), '1');
    if (one)
    {
        if (b == one_zero or b == zero_one)
        {
            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
            cout << "YES" << endl;
    }
    else
    {
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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

//****************another approach***************
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b;
    cin >> b;

    bool consecutive = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] == b[i + 1])
            consecutive = true;
    }
    int one = count(a.begin(), a.end(), '1');
    if (one)
    {
        if (consecutive)
            cout << "YES" << endl;
        else
        {
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    else
    {
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
