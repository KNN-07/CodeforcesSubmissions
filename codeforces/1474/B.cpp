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
// Source https://codeforces.com/contest/1474/problem/B
const int maxP = 1e7;
int p[maxP + 1];
void sieve()
{
    fill(p, p + maxP + 1, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= maxP; ++i)
        if (p[i] == 1)
            for (int j = i * i; j <= maxP; j += i)
                p[j] = 0;
}
void solve()
{
    int d;
    cin >> d;
    ll x1 = d + 1, x2 = x1 + d;
    while (!p[x1])
    {
        x1++;
        x2++;
    }
    while (!p[x2])
        x2++;
    cout << x1 * x2;
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
    sieve();
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