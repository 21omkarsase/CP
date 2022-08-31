#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

//------------------------------what is this I don't know....just makes my mess faster--------------------------------------

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("popcnt")
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll mod = 1000000007;
double eps = 1e-12;
#define ln "\n"
#define printvv(a)                     \
    for (int i = 0; i < a.size(); i++) \
    {                                  \
        cout << a[i] << " ";           \
    }                                  \
    cout << ln;
#define printaa(a, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cout << a[i] << " ";    \
    }                           \
    cout << ln;
#define dbg(x) cerr << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define tv(a)         \
    for (auto &x : a) \
        cin >> x;
#define take_array(a, n)        \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> a[i];            \
    }
#define take_matrix(a, m, n)        \
    for (int i = 0; i < m; i++)     \
    {                               \
        for (int j = 0; j < n; j++) \
        {                           \
            cin >> a[i][j];         \
        }                           \
    }
#define print_matrix(a, m, n)       \
    for (int i = 0; i < m; i++)     \
    {                               \
        for (int j = 0; j < n; j++) \
        {                           \
            cout << a[i][j] << " "; \
        }                           \
        cout << ln;                 \
    }
#define ff first
#define ss second
#define YES cout << "YES\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define NO cout << "NO\n";
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
#define count(a, x) count(a.begin(), a.end(), x)
#define sum(a) accumulate(a.begin(), a.end(), 0)
#define max_ele(a) *max_element(a.begin(), a.end())
#define min_ele(a) *min_element(a.begin(), a.end())
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

//-------------------FUNCTIONS------------------------
// ll strtonum(c){stringstream geek(c); ll x=0; geek>>x; return x;}
// prime count <=n eular toient fn int phi(int n){int result = n;for (int p = 2; p * p <= n; ++p) {if (n % p == 0) {while (n % p == 0) { n /= p; }result -= result / p;}}if (n > 1){result -= result / n; }return result;}
// in O(r) int BC(int n, int k) { int res = 1;  if (k > n - k) {k = n - k;} ; for (int i = 0; i < k; ++i) {  res *= (n - i); res /= (i + 1); } return res; }
// Kmin in O(N) int Ksmall(int arr[], int n, int k){  int max = 0; for (int i = 0; i < n; i++){if (arr[i] > max)max = arr[i];} int counter[max + 1] = { 0 };int smallest = 0;for (int i = 0; i < n; i++) {counter[arr[i]]++;}for (int num = 1; num <= max; num++){if (counter[num] > 0) {smallest += counter[num];}if (smallest >= k) {return num;}}}
// string removeChar(string str, char chara){stringstream ss(str);string temp;str = "";while (getline(ss, temp, chara )) {str = str + temp;} return str;}
// string serialize(TreeNode* root) {if(!root) { return "NULL,";}return to_string(root->val)+","+serialize(root->left)+serialize(root->right);}
// ll xor1ton(ll n){ if (n % 4 == 0){return n;}else{if (n % 4 == 1){return 1;}else{if (n % 4 == 2){return n + 1;} return 0;}}}

//----------------------------------Real game starts here--------------------------------------

/*
LeetCode Template
static const auto ____ = [](){
  // fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    return 0;
}();
*/

const int N = 1000000;

int segtree[4 * N];

void build(vector<ll> a, ll index, ll l, ll r)
{
    if (l == r)
        segtree[index] = a[l];
    else
    {
        int m = (l + r) / 2;
        build(a, index * 2, l, m);
        build(a, index * 2 + 1, m + 1, r);
        segtree[index] = segtree[index * 2] + segtree[index * 2 + 1];
    }
}

ll sum_query(ll index, ll start, ll end, ll l, ll r)
{
    if (l > r)
        return 0;

    if (l == start && r == end)
        return segtree[index];

    ll m = (start + end) / 2;
    return sum_query(index * 2, start, m, l, min(m, r)) +
           sum_query(index * 2 + 1, m + 1, end, max(l, m + 1), r);
}

void updateseg(ll index, ll start, ll end, ll rindex, ll diff)
{
    if (start <= rindex && rindex <= end)
        segtree[index] += diff;
    else
        return;

    if (start == end)
        return;

    ll m = (start + end) / 2;
    updateseg(2 * index, start, m, rindex, diff);
    updateseg(2 * index + 1, m + 1, end, rindex, diff);
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    build(a, 1, 0, n - 1);

    while (m--)
    {
        ll q, l, r;
        cin >> q >> l >> r;
        if (q == 1)
        {
            updateseg(1, 0, n - 1, l, r - a[l]);
        }
        else
        {
            cout << sum_query(1, 0, n - 1, l, r - 1) << "\n";
        }
    }
}

int main()
{
    fast_cin();
    ll t = 6;
    // cin >> t;
    for (int it = 1; it <= t; it++)
    {
        // cout << "Case #" << it + 1 << ": ";
        solve();
    }
    return 0;
}