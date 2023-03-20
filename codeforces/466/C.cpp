/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
using namespace std;
#define el '\n'
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
    int n;
    cin >> n;
    vi a(n), cnt(n + 69);
    ll S = 0;
    for (auto &x : a)
    {
        cin >> x;
        S += x;
    }
    if (S % 3)
    {
        cout << 0;
        return;
    }
    S /= 3;
    ll ss = 0;
    fordec(i, n - 1, 0) ss += a[i], cnt[i] = (ss == S);
    fordec(i, n - 2, 0) cnt[i] += cnt[i + 1];
    ll ans = 0;
    ss = 0;
    for (int i = 0; i + 2 < n; i++)
    {
        ss += a[i];
        if (ss == S)
            ans += cnt[i + 2];
    }
    cout << ans;
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