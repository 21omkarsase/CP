// Chef is a high-ranked army officer and he has been given the job to train the army.

// The army consists of NN soldiers where each soldier has 33 parameters:

// Attack points: A_iA
// i
// ​
//   where (0\lt A_i \lt 1000)(0<A
// i
// ​
//  <1000);
// Defense points: (1000-A_i)(1000−A
// i
// ​
//  );
// Soldier type: ATTACK or DEFENSE.
// For the whole army:

// Attack value of the army is defined as the sum of attack points of all ATTACK type soldiers.
// Defense value of the army is defined as the sum of defense points of all DEFENSE type soldiers.
// Rating of the army is defined as the product of Attack value and Defense value of the army.
// Assign the soldier type to each of the soldiers to maximize the rating of the army. Print the maximum rating.

// NOTE: The output may exceed the range of a 3232-bit integer.
// Remember to use 6464-bit data types, such as long long in C++.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains an integer NN — the number of soldiers in the army.
// The next line contains the array AA — where A_{i}A
// i
// ​
//   denotes the attack points of the i^{th}i
// th
//   soldier.
// Output Format
// For each test case, output on a new line the maximum possible rating that can be achieved.

// Constraints
// 1 \leq T \leq 1001≤T≤100
// 2 \leq N \leq 10002≤N≤1000
// 0 \lt A_{i} \lt 10000<A
// i
// ​
//  <1000
// Sum of NN over all test cases does not exceed 20002000.
// Sample 1:
// Input
// Output
// 4
// 2
// 500 500
// 3
// 500 500 500
// 4
// 100 800 300 500
// 4
// 300 700 800 200
// 250000
// 500000
// 2080000
// 2250000
// Explanation:
// Test case 11: Soldier 11 should be used for ATTACK while soldier 22 should be used for DEFENSE. Thus, the attack value as well as the defense value equals 500500. The rating =500\cdot 500 = 250000=500⋅500=250000. It can be proven that this is the maximum possible rating that we can achieve for the given army.

// Test case 22:

// Soldier 11 and 22 should be used for ATTACK. So, attack value =500+500=1000=500+500=1000
// Soldier 33 should be used for DEFENSE. So, defense value =(1000-500)=500=(1000−500)=500
// So, rating =1000 \cdot 500=500000=1000⋅500=500000. This is the maximum possible rating that we can achieve for the given army.

// Test case 33:

// Soldier 22 and 44 should be used for ATTACK. So, attack value =800+500=1300=800+500=1300
// Soldier 11 and 33 should be used for DEFENSE. So, defense value =(1000-100)+(1000-300)=1600=(1000−100)+(1000−300)=1600
// So, rating =1300 \cdot 1600=2080000=1300⋅1600=2080000. This is the maximum possible rating that we can achieve for the given army.

// Test case 44:

// Soldier 22 and 33 should be used for ATTACK. So, attack value =700+800=1500=700+800=1500
// Soldier 11 and 44 should be used for DEFENSE. So, defense value =(1000-300)+(1000-200)=1500=(1000−300)+(1000−200)=1500
// So, rating =1500 \cdot 1500=2250000=1500⋅1500=2250000. This is the maximum possible rating that we can achieve for the given army.

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, a[n];
    long long ans = 0, finalAns = INT_MIN, def = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        ans -= (long long)a[i];
        def += (1000 - (long long)a[i]);
        finalAns = max(finalAns, ans * def);
    }
    cout << finalAns << endl;
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

// ***********worng********************

// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     int a[n], d[n];
//     bool allequal = true;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         d[i] = 1000 - a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] != 500)
//         {
//             allequal = false;
//         }
//     }

//     long long aVal = 0, dVal = 0;
//     if (!allequal)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] >= d[i])
//             {
//                 aVal += a[i];
//             }
//             else
//             {
//                 dVal += d[i];
//             }
//         }
//         cout << aVal * dVal << endl;
//     }
//     else
//     {
//         aVal = 0;
//         dVal = 0;
//         int mid = n / 2;
//         for (int i = 0; i < mid; i++)
//         {
//             aVal += a[i];
//         }
//         for (int i = mid; i < n; i++)
//         {
//             dVal += a[i];
//         }
//         cout << aVal * dVal << endl;
//     }
// }

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
