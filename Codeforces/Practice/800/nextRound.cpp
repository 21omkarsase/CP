// A. Next Round
// time limit per test3 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// "Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

// A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

// Input
// The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

// The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

// Output
// Output the number of participants who advance to the next round.

// Examples
// inputCopy
// 8 5
// 10 9 8 7 7 7 5 5
// outputCopy
// 6
// inputCopy
// 4 2
// 0 0 0 0
// outputCopy
// 0
// Note
// In the first example the participant on the 5th place earned 7 points. As the participant on the 6th place also earned 7 points, there are 6 advancers.

// In the second example nobody got a positive score.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], score = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i + 1 == k) // considering score=ith(1 base) participant
            score = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= score and a[i] > 0) // score must be positive
            ans++;
        else
            break;
    }

    cout << ans << endl;

    return 0;
}