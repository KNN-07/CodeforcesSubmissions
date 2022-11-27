/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
#define int long long
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
const bool tc = false;
ll C[5010][5010];
ll p2[5010];
void solve()
{
    ll n, m, a = 0;
    cin >> n >> m;
    p2[0] = 1;
    for (int i = 0; i <= n; i++)
    {
        C[i][0] = 1;
        C[i][i] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        p2[i] = (p2[i - 1] * i) % m;
        for (int j = 0; j <= i; j++)
        {
            C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % m;
        }
    }
    if (n % 2 == 0)
    {
        for (int r = 2; r <= n / 2; r++)
        {
            for (int k = 0; k <= r - 2; k++)
            {
                a += ((((C[r - 2][k] % m * r % m) % m * p2[n - k - 3]) % m)) % m;
                a = a % m;
            }
        }
        a += p2[n - 2];
        a %= m;
    }
    else
    {
        for (int r = 2; r <= (n + 1) / 2; r++)
        {
            for (int k = 0; k <= r - 2; k++)
            {
                a += (((C[r - 2][k] % m * (r - 1) % m) % m * p2[n - k - 3]) % m);
                a = a % m;
            }
        }
    }
    cout << (a * n) % m;
}

signed main()
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