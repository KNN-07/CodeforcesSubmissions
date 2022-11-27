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
#define allof(x) x.begin(), x.end()
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
#define int ll
const string taskname = "";
const bool tc = true;

void solve()
{
    int n;
    cin >> n;
    vll arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(allof(arr));
    vll a;
    int t = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
            t++;
        else
        {
            a.pb(t);
            t = 1;
        }
    }
    a.pb(t);
    int x = 0, y = n, ans = n / 2;
    for (int m : a)
    {
        x += m, y -= m;
        ans = max(ans, x * y);
    }
    cout << ans;
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