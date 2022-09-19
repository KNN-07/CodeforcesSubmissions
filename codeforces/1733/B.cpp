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
    if ((x == y && x == 0) || (x != 0 && y != 0) || ((n - 1) % max(x, y) != 0))
    {
        cout << -1;
    }
    else
    {
        ll out = 1;
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (ans == max(x, y))
            {
                out = i + 2;
                ans = 0;
            }
            cout << out << " ";
            ans++;
        }
    }
}

int main()
{
    // stdin
    //  freopen("<file name insert>.inp", "r", stdin);
    //  freopen("<file name insert>.out", "w", stdout);
    //  Code here
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        cout << el;
    }
}