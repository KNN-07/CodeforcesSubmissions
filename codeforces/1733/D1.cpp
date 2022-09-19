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

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    string a, b;
    cin >> a >> b;
    vi bitmask;
    for (int i = 0; i < n; i++)
    {
        // pb bitmask
        if (a[i] != b[i])
        {
            bitmask.pb(i);
        }
    }
    if (bitmask.size() == 0)
    {
        cout << 0;
    }
    else
    {
        if (bitmask.size() % 2 != 0)
        {
            cout << -1;
        }
        else if (bitmask.size() > 2)
            cout << bitmask.size() * y / 2;
        else if (bitmask[1] == bitmask[0] + 1)
        {
            if (y * 2 > x)
                cout << x;
            else
                cout << y * 2;
        }
        else
            cout << y;
    }
}
int main()
{
    // stdin
    //  freopen("<file name insert>.inp", "r", stdin);
    //  freopen("<file name insert>.out", "w", stdout);
    //  Code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << el;
    }
}