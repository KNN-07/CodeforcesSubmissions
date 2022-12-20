/*
Templete by norman/KNN-07
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
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
const bool tc = false;
const string taskname = "PARTY";

void solve()
{
    // ll a, b, c;
    // cin >> a >> b >> c;

    // cout << (a + b + c) / 3;
    // cout << ceill(ldb(a*b*c) / 18);
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (2 * (a[0] + a[1]) <= a[2])
        cout << a[1] + a[0];
    else
    {
        //     int t = 0;
        //     priority_queue<int> pq;
        //     forinc(i, 0, 2) pq.push(a[i]);
        //     while (pq.top() > 0)
        //     {
        //         int x = pq.top();
        //         pq.pop();
        //         int y = pq.top();
        //         pq.pop();
        //         pq.push(x - 2);
        //         pq.push(y - 1);
        //         t++;
        //     }
        //     cout << t - 1;
        cout << (a[0] + a[1] + a[2]) / 3;
    }
    // ll ans = a[0];
    // a[1] -= ans, a[2] -= ans;
    // int t = a[2] / 2;
    // ans += min(a[1], t);
    // cout << ans;
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
