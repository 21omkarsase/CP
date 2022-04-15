// For a positive integer M, MoEngage defines digitSum(M) as the sum of digits of the number M (when written in decimal).

// For example, digitSum(1023)=1+0+2+3=6.

// Given a positive integer N, find the smallest integer X strictly greater than N such that:

// digitSum(N) and digitSum(X) have different parity, i.e. one of them is odd and the other is even.
// Input Format
// The first line contains an integer T, the number of test cases. The description of the T test cases follow.
// Each test case consists of a single line of input with a single integer, the number N.
// Output Format
// For each test case, print in a single line, an integer, the answer to the problem.
// Constraints
// 1≤T≤1000
// 1≤N<109
// Sample Input 1
// 3
// 123
// 19
// 509
// Sample Output 1
// 124
// 21
// 511
// Explanation
// Test Case 1: digitSum(123)=1+2+3=6 is even and digitSum(124)=1+2+4=7 is odd, so the answer is 124.

// Test Case 2: digitSum(19)=1+9=10 is even, digitSum(20)=2+0=2 is also even, whereas digitSum(21)=2+1=3 is odd. Hence, the answer is 21.

// Test Case 3: digitSum(509)=5+0+9=14 is even, digitSum(510)=5+1+0=6 is also even, whereas digitSum(511)=5+1+1=7 is odd. Hence, the answer is 511.

#include <iostream>
using namespace std;

int getsum(int N)
{
    int ans = 0;
    while (N != 0)
    {
        ans += N % 10;
        N /= 10;
    }
    return ans % 2;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        if (getsum(N) != getsum(N + 1))
        {
            cout << N + 1 << endl;
        }
        else
        {
            cout << N + 2 << endl;
        }
    }
    return 0;
}
