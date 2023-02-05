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
const bool tc = false;

void solve()
{
    ll n;
    cin >> n;
    vll a(n + 1), sa(n + 1);
    forinc(i, 1, n) cin >> a[i];
    sa = a;
    sort(sa.begin() + 1, sa.end());
    // partial_sum(alle(a), pfsa.begin());
    // partial_sum(alle(sa), pfssa.begin());
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1], sa[i] += sa[i - 1];
    int m;
    cin >> m;
    while (m--)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
            cout << a[r] - a[l - 1];
        else
            cout << sa[r] - sa[l - 1];
        cout << '\n';
    }
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