// Today is your birthday. You have decided to give away candies to your friends.

// You have N friends and M candies. Suppose the 1st friend has L buckets, 2nd has L+1 buckets, 3rd has L+2 buckets, and so on — in general, the ith friend has L+i−1 buckets.

// You start distributing candies from the Nth friend and go towards the 1st friend.

// For each friend, you put the maximum number of candies in each bucket such that all the buckets for that friend have an equal number of candies in them. Now, you take the remaining candies, move to the next friend, and repeat the above step.

// Find the number of candies which will remain with you after visiting all your friends.

// Input Format
// The first line of input will contain a single integer T, the number of test cases. Then the test cases follow.
// Each test case consists of a single line of input, containing three space-separated integers N,M,L — representing the number of friends, number of candies that you have, and the number of buckets with the 1st friend respectively.
// Output Format
// For each test case, output a single integer representing the total number of candies left with you after distributing candies to all your friends.

// Constraints
// 1≤T≤105
// 0≤N,M≤1018
// 1≤L≤1018
// Sample Input 1
// 4
// 2 8 2
// 3 9 2
// 3 10 2
// 4 100 10
// Sample Output 1
// 0
// 1
// 0
// 9
// Explanation
// Test case 1: There are two friends. The 1st friend has 2 buckets and the 2nd friend has 3 buckets. You will give 6 candies to 2nd friend (2 in each bucket). Now you are left with 2 candies, which you will give to the 1st friend (1 in each bucket). You will be left with 0 candies at the end.

// Test case 2: There are 3 friends and 9 candies. The 1st friend has 2 buckets, 2nd friend has 3 buckets, and 3rd friend has 4 buckets. You will give 8 candies to the 3rd friend (2 in each bucket). Now the 2nd friend and 1st friend will get 0 candies. You will be left with 1 candy at the end.

// Test case 3: There are 3 friends and 10 candies. You will give 8 candies to the 3rd friend (2 in each bucket). Next, the 2nd friend will get 0 candies. Finally, the 1st friend will get 2 candies (1 in each bucket). You will be left with 0 candies at the end.

#include <iostream>
using namespace std;

void solution()
{
    long long int n, m, l;
    cin >> n >> m >> l;

    long long int i = n - 1;
    while (i >= 0)
    {
        m = m % (l + i);
        i = m - l;
    }
    cout << m << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        solution();
    }
    return 0;
}
