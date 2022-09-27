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
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pii> index;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == '*')
            {
                index.pb(mp(i, j));
            }
        }
    }
    if (index[0].first == index[1].first)
    {
        long rr = (1 + index[0].first) % n;
        a[rr][index[0].second] = '*';
        a[rr][index[1].second] = '*';
    }
    else if (index[0].second == index[1].second)
    {
        long cc = (1 + index[0].second) % n;
        a[index[0].first][cc] = '*';
        a[index[1].first][cc] = '*';
    }
    else
    {
        a[index[0].first][index[1].second] = '*';
        a[index[1].first][index[0].second] = '*';
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << el;
    }
}
int main()
{
    // stdin
    //  freopen("<file name insert>.inp", "r", stdin);
    //  freopen("<file name insert>.out", "w", stdout);
    //  Code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
        // cout << el;
    }
}