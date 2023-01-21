/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
using namespace std;
#define el endl
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define pf push_front
#define fi first
#define nd second
#define forinc(i, a, b) for (int i = a; i <= b; i++)
#define fordec(i, a, b) for (int i = a; i >= b; i--)
#define alle(x) (x).begin(), (x).end()
#define ralle(x) (x).rbegin(), (x).rend()
#define mms(a, v) memset(a, v, sizeof(a))
#define lwb(a, v) lower_bound(a.begin(), a.end(), v)
#define upb(a, v) upper_bound(a.begin(), a.end(), v)
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef vector<bool> vb;
typedef unordered_set<char> chrset;
const string taskname = "";
const bool tc = true;

void solve()
{
    int n;
    cin >> n;
    vi pts(n);
    for (auto &x : pts)
        cin >> x;
    vector<vi> dp(2, vi(n + 1, 1e9));
    dp[1][0] = 0;
    forinc(j, 0, n - 1)
    {
        dp[0][j + 1] = min(dp[0][j + 1], dp[1][j] + pts[j]);
        dp[1][j + 1] = min(dp[1][j + 1], dp[0][j]);
        if (j + 2 <= n)
        {
            dp[0][j + 2] = min(dp[0][j + 2], dp[1][j] + pts[j] + pts[j + 1]);
            dp[1][j + 2] = min(dp[1][j + 2], dp[0][j]);
        }
    }
    cout << min(dp[0][n], dp[1][n]);
}

int main()
{
    if (fopen((taskname + ".inp").c_str(), "r"))
    {
        freopen((taskname + ".inp").c_str(), "r", stdin);
        freopen((taskname + ".out").c_str(), "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tsc = 1;
    if (tc)
    {
        cin >> tsc;
    }
    while (tsc--)
    {
        solve();
        cout << el;
    }
}