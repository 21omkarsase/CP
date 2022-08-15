// You are given two N \times MN×M integer matrices AA and BB. You are allowed to perform the following operation on AA as many times as you like (possibly, zero):

// Pick any square submatrix of AA and flip it about either its main diagonal or its antidiagonal.
// For example, suppose you choose the submatrix \begin{bmatrix} 1 \;\;\;\; 2 \;\;\;\; 3 \\ 4 \;\;\;\; 5 \;\;\;\; 6 \\ 7 \;\;\;\; 8 \;\;\;\; 9 \end{bmatrix} 
// ⎣
// ⎡
// ​
  
// 123
// 456
// 789
// ​
  
// ⎦
// ⎤
// ​
//   .

// It can be converted into either \begin{bmatrix} 1 \;\;\;\; 4 \;\;\;\; 7 \\ 2 \;\;\;\; 5 \;\;\;\; 8 \\ 3 \;\;\;\; 6 \;\;\;\; 9 \end{bmatrix} 
// ⎣
// ⎡
// ​
  
// 147
// 258
// 369
// ​
  
// ⎦
// ⎤
// ​
//   by flipping about the main diagonal, or \begin{bmatrix} 9 \;\;\;\; 6 \;\;\;\; 3 \\ 8 \;\;\;\; 5 \;\;\;\; 2 \\ 7 \;\;\;\; 4 \;\;\;\; 1 \end{bmatrix} 
// ⎣
// ⎡
// ​
  
// 963
// 852
// 741
// ​
  
// ⎦
// ⎤
// ​
//   by flipping about the antidiagonal.

// Is it possible to convert AA to BB by performing this operation several (possibly, zero) times?

// Note: For the purposes of this problem, a submatrix of a matrix is the intersection of a contiguous segment of rows with a contiguous segment of columns.

// For example, if A = \begin{bmatrix} 1 \;\;\;\; 2 \;\;\;\; 3 \\ 4 \;\;\;\; 5 \;\;\;\; 6 \\ 7 \;\;\;\; 8 \;\;\;\; 9 \end{bmatrix}A= 
// ⎣
// ⎡
// ​
  
// 123
// 456
// 789
// ​
  
// ⎦
// ⎤
// ​
//   then \begin{bmatrix} 2 \end{bmatrix}[ 
// 2
// ​
//  ], \begin{bmatrix} 5 \;\;\;\; 6 \\ 8 \;\;\;\; 9 \end{bmatrix}[ 
// 56
// 89
// ​
//  ], and \begin{bmatrix}1 \\ 4\end{bmatrix}[ 
// 1
// 4
// ​
//  ] are submatrices of AA, while \begin{bmatrix}1 \;\;\;\; 3 \\ 7 \;\;\;\; 9\end{bmatrix}[ 
// 13
// 79
// ​
//  ] is not.

// A square submatrix is a submatrix with the same number of rows and columns.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of multiple lines of input.
// The first line of each test case contains two space-separated integers NN and MM — the number of rows and columns of the matrices, respectively.
// The next NN lines describe the matrix AA. The ii-th of these lines contains MM space-separated integers ― the values A_{i, 1}, A_{i, 2}, \ldots, A_{i, M}A 
// i,1
// ​
//  ,A 
// i,2
// ​
//  ,…,A 
// i,M
// ​
//  .
// The next NN lines describe the matrix BB. The ii-th of these lines contains MM space-separated integers ― the values B_{i, 1}, B_{i, 2}, \ldots, B_{i, M}B 
// i,1
// ​
//  ,B 
// i,2
// ​
//  ,…,B 
// i,M
// ​
//  .
// Output Format
// For each test case, print YES if its possible to convert AA to BB, else print NO.

// Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yes, yeS, YeS will all be treated as identical.

// Constraints
// 1 \leq T \leq 10^41≤T≤10 
// 4
 
// 1 \leq N,M \leq 3 \cdot 10^51≤N,M≤3⋅10 
// 5
 
// 1 \leq A_{i, j},B_{i, j} \leq 10^91≤A 
// i,j
// ​
//  ,B 
// i,j
// ​
//  ≤10 
// 9
 
// The sum of N\cdot MN⋅M over all test cases won't exceed 3 \cdot 10^53⋅10 
// 5
//  .
// Sample 1:
// Input
// Output
// 2
// 2 3
// 1 2 3
// 4 5 6
// 1 4 3
// 6 5 2
// 3 3
// 12 11 8
// 7 1 1
// 9 2 4
// 4 1 8
// 2 1 11
// 9 7 12
// YES
// YES
// Explanation:
// Test case 11: AA can be converted to BB as follows:

// \begin{bmatrix} 1 \;\;\;\; 2 \;\;\;\; 3 \\ 4 \;\;\;\; 5 \;\;\;\; 6 \end{bmatrix} \to \begin{bmatrix} 1 \;\;\;\; \textcolor{red}{6} \;\;\;\; \textcolor{red}{3} \\ 4 \;\;\;\; \textcolor{red}{5} \;\;\;\; \textcolor{red}{2} \end{bmatrix} \to \begin{bmatrix} \textcolor{red}{1} \;\;\;\; \textcolor{red}{4} \;\;\;\; 3 \\ \textcolor{red}{6} \;\;\;\; \textcolor{red}{5} \;\;\;\; 2 \end{bmatrix}
// [ 
// 123
// 456
// ​
//  ]→[ 
// 163
// 452
// ​
//  ]→[ 
// 143
// 652
// ​
//  ]

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    
    vector<vector<int>>a(n,vector<int>(m)),b(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
        
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>b[i][j];
        
    if(n==1 || m==1){
        if(a==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        return;
    }
    
    multiset<int>black_a,black_b,red_a,red_b;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0){
                black_a.insert(a[i][j]);
                black_b.insert(b[i][j]);
            }else{
                red_a.insert(a[i][j]);
                red_b.insert(b[i][j]);
            }
        }
    }
    
    if(black_a==black_b and red_a==red_b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int t;cin>>t;
    
    while(t--)
        solve();
}
