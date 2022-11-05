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
const bool tc = true;
const string taskname = "";
void solve()
{
    ll x;
    cin >> x;
    cout << (x + 1) / 2 << endl;
    for (int i = 1; i <= (x + 1) / 2; i++)
    {
        cout << 3 * (i - 1) + 1 << " " << x * 3 - (3 * (i - 1)) << "\n";
    }
}

int main()
{
    if (taskname != "")
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
        // cout << el;
    }
}